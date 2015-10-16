$C0 Evalue firstShield
$C2 Evalue lastShield
-$C0 Evalue ShieldError
Variable shield

00 Evalue MODE1
01 Evalue MODE2
\  02 Evalue Subaddr1
\  03 Evalue Subaddr2
\  04 Evalue Subaddr3
\  05 Evalue ALLCALLADDR
\  $0E Evalue LEDAll-Address
\  $FD Evalue pre_scaler

: set_autoincr ( -- )
    i2c.start
    shield @ i2c.tx
    MODE1 i2c.tx
    %00100000 i2c.tx
    i2c.start
;

: sleep ( -- )
    i2c.start
    shield @ i2c.tx
    MODE1 i2c.tx
    %00010000 i2c.tx
    i2c.stop
;

: prescaler! ( n -- )
    sleep
    i2c.start
    shield @ i2c.tx
    $FE i2c.tx
    i2c.tx
    i2c.stop
;

: reset ( -- )
    i2c.start
    0 i2c.tx        \ general address
    %110 i2c.tx     \ reset
    i2c.stop
;

: led ( n -- )          \ calculate reg.addr of LED Nr. n
    4 *  6 +
;

\ write one 16 bit data to two subsequent regs starting at address addr
 : led!  ( n addr -- )
   set_autoincr
   shield @ i2c.tx
   led i2c.tx                           \ reg.addr
\   $100 u/mod swap i2c.tx i2c.tx        \ as this is always NUll we won't need it
   0 0 i2c.tx i2c.tx
   $100 u/mod swap i2c.tx i2c.tx
   i2c.stop ;

\  dealing with motor registers

\ M0 --> pwm = 8;  in2 = 9;  in1 = 10;
\ M1 --> pwm = 13; in2 = 12; in1 = 11;
\ M2 --> pwm = 2;  in2 = 3;  in1 = 4;
\ M3 --> pwm = 7;  in2 = 6;  in1 = 5;

\ Ebuffer from Amforth documentation by M. Trute and others

\ At this time there is a little bug in Ebuffer: Maybe it will be replaced in
\ future. If so you have to care about the definition of the Motortab.
\ : Ealloc edp swap over + to edp ;
\ : Ebuffer: edp value Ealloc ; ( n -- ) ( similar to buffer: from forth200x)

: e, ( addr n -- adr+cell )
  over !e 1 cells + ;

\ Motortab hold the coresponding LED-reg.addresses of the four motors
24 Ebuffer: Motors

\ workaround: 2 + ... drop
Motors 2 + 8 e, 9 e, &10 e, &13 e, &12 e, &11 e, 2 e, 3 e, 4 e, 7 e, 6 e, 5 e, drop

: set_shield ( M-Nr -- M-Nr' )
    4 /mod 2* firstShield +       \ calculate shieldnr and motornr
    dup lastShield >              \ shieldnr too big?
    IF
        ShieldError throw
    ELSE
        shield !
    THEN
;

\ Values to write to the LED-regs for forward, backward, etc ...
: forward  ( -- n n ) $FFF 0 ;
: backward ( -- n n ) 0 $FFF ;
: hold     ( -- n n ) $FFF $FFF ;
: release  ( -- n n n ) $1000 $1000 $1000 ;

\ read the three LED-regs for a given motor Nr
: motor-@ ( Nr -- n n n )
    cells 3 * Motors + 2 +
    dup @e swap 2 +
    dup @e swap 2 +
    @e
;

: m-run ( direction speed M-Nr -- )
    set_shield
    motor-@
    2swap led!
    rot swap led!
    led!
;

: init
    i2c.init.default
    lastShield firstShield
    DO
        I shield ! 3 prescaler!
    LOOP
;
