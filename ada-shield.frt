\ pre ANS94 Forth. <builds .. does> instead of create does>
\
: <builds (create) reveal -1 , ;

\ EEPROM based values

: Evalue ( n -- )
    (value)
    ehere ,
    ['] Edefer@ ,
    ['] Edefer! ,
    ehere dup cell+ to ehere !e
;

&188 constant TWCR      \ TWI Control Register
&185 constant TWSR      \ TWI Status Register

\ Code: Matthias Trute
\ Text: M.Kalus

\ A named port pin puts a bitmask on stack, wherin the set bit indicates which
\ bit of the port register corresponds to the pin.
\ And then puts the address of its port on stack too.

\ Use it this way:
\ PORTD 7 portpin: PD.7  ( define portD pin #7)
\ PD.7 high              ( turn portD pin #7 on, i.e. set it high-level)
\ PD.7 low               ( turn portD pin #7 off, i.e. set it low-level)
\ PD.7 <ms> pulse        ( turn portD pin #7 for <ms> high and low)
\ the following words are for "real" IO pins only
\ PD.7 pin_output        ( set DDRD so that portD pin #7 is output)
\ PD.7 pin_input         ( set DDRD so that portD pin #7 is input)
\ PD.7 pin_high?         ( true if pinD pin #7 is high)
\ PD.7 pin_low?          ( true if pinD pin #7 is low)
\
\ multi bit operation
\ PORTD F bitmask: PD.F  ( define the lower nibble of port d )
\ PD.F pin@              ( get the lower nibble bits )
\ 5 PD.F pin!            ( put the lower nibble bits, do not change the others )

: bitmask: ( C: "ccc" portadr bmask -- ) ( R: -- pinmask portadr )
  <builds
     , ,
  does>
    dup @i swap i-cell+ @i
;

: portpin: ( C: "ccc" portadr n -- ) ( R: -- pinmask portadr )
    1 over 7 and lshift >r \ bit position
    3 rshift +             \ byte address
    r> bitmask:            \ portaddr may have changed
;



\ Turn a port pin on, dont change the others.
: high ( pinmask portadr -- )
    dup  ( -- pinmask portadr portadr )
    c@   ( -- pinmask portadr value )
    rot  ( -- portadr value pinmask )
    or   ( -- portadr new-value)
    swap ( -- new-value portadr)
    c!
;

\ Turn a port pin off, dont change the others.
: low ( pinmask portadr -- )
    dup  ( -- pinmask portadr portadr )
    c@   ( -- pinmask portadr value )
    rot  ( -- portadr value pinmask )
    invert and ( -- portadr new-value)
    swap ( -- new-value port)
    c!
;


\ synonym off low
\ synonym on  high

\ pulse the pin
: pulse ( pinmask portaddr time -- )
    >r
    2dup high
    r> 0 ?do 1ms loop
    low
;

: is_low? ( pinmask portaddr -- f)
    c@ and 0=
;

: is_high? ( pinmask portaddr -- f)
    c@ over and =
;

: wait_low ( pinmask portaddr -- )
    begin
      2dup is_low?
    until 2drop
;

: wait_high_all ( pinmask portaddr -- )
    begin
      2dup is_high?
    until 2drop
;

\ write the pins masked as output
\ read the current value, mask all but
\ the desired bits and set the new
\ bits. write back the resulting byte
: pin! ( c pinmask portaddr -- )
    dup ( -- c pm pa pa )
    >r
    c@  ( -- c pm c' )
    over invert and ( -- c pm c'' )
    >r  ( -- c pm )
    and
    r>  ( -- c c'' )
    or r>
    c!
;


\ Only for PORTx bits,
\ because address of DDRx is one less than address of PORTx.

\ Set DDRx so its corresponding pin is output.
: pin_output ( pinmask portadr -- )
    1- high
;

\ Set DDRx so its corresponding pin is input.
: pin_input  ( pinmask portadr -- )
    1- low
;

\ PINx is two less of PORTx
: pin_high? ( pinmask portaddr -- f)
    1- 1- c@ and
;

: pin_low? ( pinmask portaddr -- f)
    1- 1- c@ invert and
;

\ read the pins masked as input
: pin@  ( pinmask portaddr -- c )
    1- 1- c@ and
;

\ toggle the pin
: toggle ( pinmask portaddr -- )
  2dup pin_high? if
    low
  else
    high
  then
;

\ disable the pull up resistor
: pin_pullup_off ( pinmask portaddr -- )
  2dup pin_input low
;


\ enable the pull up resistor
: pin_pullup_on ( pinmask portaddr -- )
  2dup pin_input high
;

\ basic I2C operations, uses 7bit bus addresses
\ uses the TWI module of the Atmega's.

\ provides public commands
\  i2c.ping?         -- checks if addr is active
\  i2c.init          -- flexible configuration setup. see below
\  i2c.init.default  -- generic slow speed setup
\  i2c.off           -- turns off I2C

\ and more internal commands
\  i2c.wait          -- wait for the current i2c transaction
\  i2c.start         -- send start condition
\  i2c.stop          -- send stop condition
\  i2c.tx            -- send one byte, wait for ACK
\  i2c.rx            -- receive one byte with ACK
\  i2c.rxn           .. receive one byte with NACK
\  i2c.status        -- get the last i2c status

\
\ i2c (SCL) clock speed = CPU_clock/(16 + 2*bitrateregister*(4^prescaler))
\ following the SCL clock speed in Hz for an 8Mhz device
\      bitrate register (may be any value between 0 and 255)
\               4      8       16      32      64      128    255
\      prescaler
\      /1    333.333 250.000 166.667 100.000  55.556  29.412  15.209
\      /4    166.667 100.000  55.556  29.412  15.152   7.692   3.891
\      /16    55.556  29.412  15.152   7.692   3.876   1.946     978
\      /64    15.152   7.692   3.876   1.946     975     488     245
\
\

-4000 constant i2c.timeout  \ exception number for timeout
10000 Evalue   i2c.maxticks \ # of checks until timeout is reached
variable i2c.loop           \ timeout counter
variable i2c.current        \ current hwid if <> 0

: i2c.timeout?
    i2c.loop @ 1- dup i2c.loop ! 0=
;

\ turn off i2c
: i2c.off ( -- )
    0 TWCR c!
    0 i2c.current !
;

0 constant i2c.prescaler/1
1 constant i2c.prescaler/4
2 constant i2c.prescaler/16
3 constant i2c.prescaler/64
TWSR $3 bitmask: i2c.conf.prescaler

TWCR 7 portpin: i2c.int
TWCR 6 portpin: i2c.ea
TWCR 5 portpin: i2c.sta

\ enable i2c
: i2c.init ( prescaler bitrate  -- )
    i2c.off   \ stop i2c, just to be sure
    TWBR c!   \ set bitrate register
    i2c.conf.prescaler pin! \ the prescaler has only 2 bits
;

\ a very low speed initialization.
: i2c.init.default
    i2c.prescaler/64 3 i2c.init
;

\ wait for i2c finish
: i2c.wait ( -- )
    i2c.maxticks i2c.loop !
    begin
       pause \ or 1ms?
       i2c.int is_high?
       i2c.timeout? if i2c.timeout throw then
    until
;

\ send start condition
: i2c.start ( -- )
    %10100100 TWCR c!
    i2c.wait
;

\ send stop condition
: i2c.stop ( -- )
    %10010100 TWCR c!
    \ no wait for completion.
;



\ process the data
: i2c.action
    %10000100 or TWCR c! \ _BV(i2cNT)|_BV(TWEN)
    i2c.wait
;

\ send 1 byte
: i2c.tx ( c -- )
    TWDR c!
    0 i2c.action
;

\ receive 1 byte, send ACK
: i2c.rx ( -- c )
    %01000000 \ TWEA
    i2c.action
    TWDR c@
;

\ receive 1 byte, send NACK
: i2c.rxn ( -- c )
    0 i2c.action
    TWDR c@
;

\ get i2c status
: i2c.status ( -- n )
    TWSR c@
    $f8 and
;

\ detect presence of a device on the bus
: i2c.ping?   ( addr -- f )
    i2c.start
    2* i2c.tx
    i2c.status $18 =
    i2c.stop
;

\ basic I2C operations, uses 7bit bus addresses
\ uses the TWI module of the Atmega's.

\ provides public commands

\  i2c.begin         -- starts a I2C bus cycle
\  i2c.end           -- ends a I2C bus cycle
\  i2c.n>            -- send n bytes to device   (n> means from data stack)
\  i2c.>n            -- read n bytes from device (>n means to data stack)

\ convert the bus address into a sendable byte
\ the address bits are the upper 7 ones,
\ the LSB is the read/write bit.

: i2c.wr 2* ;
: i2c.rd 2* 1+ ;

\ aquire the bus and select a device
: i2c.begin ( hwid -- )
  dup i2c.current !
  i2c.start i2c.wr i2c.tx
;
\ release the bus and deselect the device
: i2c.end ( -- )
  i2c.stop
  0 i2c.current !
;

\ tranfser data from/to data stack

\ send n bytes to addr
: i2c.n> ( xn .. x1 N addr -- )
  i2c.begin
    0 ?do     \ uses N
      i2c.tx  \ send x1 ... xn
    loop
  i2c.end
;

\ complex and flexible transaction word
\ send m bytes x1..xm and fetch n bytes y1..yn afterwards
: i2c.m>n ( n xm .. x1 m addr -- x1 .. xn )
  dup i2c.begin >r
    0 ?do i2c.tx loop \ sends m bytes
    i2c.start         \ repeated start
    r> i2c.rd i2c.tx  \ re-send addr, now with read bit set
    1- 0 ?do i2c.rx loop i2c.rxn \ read x1 .. xn
  i2c.end
;

\ fetch n bytes
: i2c.>n ( N addr -- x1 .. xn )
  2>r 0 2r> i2c.m>n
;

\ internal EEPROM routines. They do not operate on external
\ storage

\ Ebuffer: is the EEPROM pendant to buffer: from forth200x
\ it takes the number of bytes to allocate in RAM and parses
\ SOURCE for the name to give to the buffer

\ Eallot is the EEPROM pendant for allot from the core word set
\ it allocates n bytes of EEPROM storage and return the starting
\ address.

: Eallot  ehere + to ehere ;
: Ebuffer: ehere constant Eallot ;

\ for usage see http://amforth.sourceforge.net/TG/recipes/EEPROM.html

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
