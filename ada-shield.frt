: <builds (create) reveal -1 , ;

: Evalue ( n -- )
    (value)
    ehere ,
    ['] Edefer@ ,
    ['] Edefer! ,
    ehere dup cell+ to ehere !e
;

\ TWI
&189 constant TWAMR     \ TWI (Slave) Address Mask Register
  $FE constant TWAMR_TWAM \
&184 constant TWBR      \ TWI Bit Rate register
&188 constant TWCR      \ TWI Control Register
  $80 constant TWCR_TWINT \ TWI Interrupt Flag
  $40 constant TWCR_TWEA \ TWI Enable Acknowledge Bit
  $20 constant TWCR_TWSTA \ TWI Start Condition Bit
  $10 constant TWCR_TWSTO \ TWI Stop Condition Bit
  $08 constant TWCR_TWWC \ TWI Write Collition Flag
  $04 constant TWCR_TWEN \ TWI Enable Bit
  $01 constant TWCR_TWIE \ TWI Interrupt Enable
&185 constant TWSR      \ TWI Status Register
  $F8 constant TWSR_TWS \ TWI Status
  $03 constant TWSR_TWPS \ TWI Prescaler
&187 constant TWDR      \ TWI Data register
&186 constant TWAR      \ TWI (Slave) Address register
  $FE constant TWAR_TWA \ TWI (Slave) Address register Bits
  $01 constant TWAR_TWGCE \ TWI General Call Recognition Enable Bit

\ TIMER_COUNTER_1
&111 constant TIMSK1    \ Timer/Counter Interrupt Mask Register
  $20 constant TIMSK1_ICIE1 \ Timer/Counter1 Input Capture Interrupt Enable
  $04 constant TIMSK1_OCIE1B \ Timer/Counter1 Output CompareB Match Interrupt Enable
  $02 constant TIMSK1_OCIE1A \ Timer/Counter1 Output CompareA Match Interrupt Enable
  $01 constant TIMSK1_TOIE1 \ Timer/Counter1 Overflow Interrupt Enable
&54 constant TIFR1      \ Timer/Counter Interrupt Flag register
  $20 constant TIFR1_ICF1 \ Input Capture Flag 1
  $04 constant TIFR1_OCF1B \ Output Compare Flag 1B
  $02 constant TIFR1_OCF1A \ Output Compare Flag 1A
  $01 constant TIFR1_TOV1 \ Timer/Counter1 Overflow Flag
&128 constant TCCR1A    \ Timer/Counter1 Control Register A
  $C0 constant TCCR1A_COM1A \ Compare Output Mode 1A, bits
  $30 constant TCCR1A_COM1B \ Compare Output Mode 1B, bits
  $03 constant TCCR1A_WGM1 \ Waveform Generation Mode
&129 constant TCCR1B    \ Timer/Counter1 Control Register B
  $80 constant TCCR1B_ICNC1 \ Input Capture 1 Noise Canceler
  $40 constant TCCR1B_ICES1 \ Input Capture 1 Edge Select
  $18 constant TCCR1B_WGM1 \ Waveform Generation Mode
  $07 constant TCCR1B_CS1 \ Prescaler source of Timer/Counter 1
&130 constant TCCR1C    \ Timer/Counter1 Control Register C
  $80 constant TCCR1C_FOC1A \
  $40 constant TCCR1C_FOC1B \
&132 constant TCNT1     \ Timer/Counter1  Bytes
&136 constant OCR1A     \ Timer/Counter1 Output Compare Register  Bytes
&138 constant OCR1B     \ Timer/Counter1 Output Compare Register  Bytes
&134 constant ICR1      \ Timer/Counter1 Input Capture Register  Bytes
&67 constant GTCCR      \ General Timer/Counter Control Register
  $80 constant GTCCR_TSM \ Timer/Counter Synchronization Mode
  $01 constant GTCCR_PSRSYNC \ Prescaler Reset Timer/Counter1 and Timer/Counter0

\ PORTB
&37 constant PORTB      \ Port B Data Register
&36 constant DDRB       \ Port B Data Direction Register
&35 constant PINB       \ Port B Input Pins

\ TIMER_COUNTER_0
&72 constant OCR0B      \ Timer/Counter0 Output Compare Register
&71 constant OCR0A      \ Timer/Counter0 Output Compare Register
&70 constant TCNT0      \ Timer/Counter0
&69 constant TCCR0B     \ Timer/Counter Control Register B
  $80 constant TCCR0B_FOC0A \ Force Output Compare A
  $40 constant TCCR0B_FOC0B \ Force Output Compare B
  $08 constant TCCR0B_WGM02 \
  $07 constant TCCR0B_CS0 \ Clock Select
&68 constant TCCR0A     \ Timer/Counter  Control Register A
  $C0 constant TCCR0A_COM0A \ Compare Output Mode, Phase Correct PWM Mode
  $30 constant TCCR0A_COM0B \ Compare Output Mode, Fast PWm
  $03 constant TCCR0A_WGM0 \ Waveform Generation Mode
&110 constant TIMSK0    \ Timer/Counter0 Interrupt Mask Register
  $04 constant TIMSK0_OCIE0B \ Timer/Counter0 Output Compare Match B Interrupt Enable
  $02 constant TIMSK0_OCIE0A \ Timer/Counter0 Output Compare Match A Interrupt Enable
  $01 constant TIMSK0_TOIE0 \ Timer/Counter0 Overflow Interrupt Enable
&53 constant TIFR0      \ Timer/Counter0 Interrupt Flag register
  $04 constant TIFR0_OCF0B \ Timer/Counter0 Output Compare Flag 0B
  $02 constant TIFR0_OCF0A \ Timer/Counter0 Output Compare Flag 0A
  $01 constant TIFR0_TOV0 \ Timer/Counter0 Overflow Flag

\ Interrupts
&2  constant INT0Addr \ External Interrupt Request 0
&4  constant INT1Addr \ External Interrupt Request 1
&6  constant PCINT0Addr \ Pin Change Interrupt Request 0
&8  constant PCINT1Addr \ Pin Change Interrupt Request 0
&10  constant PCINT2Addr \ Pin Change Interrupt Request 1
&12  constant WDTAddr \ Watchdog Time-out Interrupt
&14  constant TIMER2_COMPAAddr \ Timer/Counter2 Compare Match A
&16  constant TIMER2_COMPBAddr \ Timer/Counter2 Compare Match A
&18  constant TIMER2_OVFAddr \ Timer/Counter2 Overflow
&20  constant TIMER1_CAPTAddr \ Timer/Counter1 Capture Event
&22  constant TIMER1_COMPAAddr \ Timer/Counter1 Compare Match A
&24  constant TIMER1_COMPBAddr \ Timer/Counter1 Compare Match B
&26  constant TIMER1_OVFAddr \ Timer/Counter1 Overflow
&28  constant TIMER0_COMPAAddr \ TimerCounter0 Compare Match A
&30  constant TIMER0_COMPBAddr \ TimerCounter0 Compare Match B
&32  constant TIMER0_OVFAddr \ Timer/Couner0 Overflow
&34  constant SPI__STCAddr \ SPI Serial Transfer Complete
&36  constant USART__RXAddr \ USART Rx Complete
&38  constant USART__UDREAddr \ USART, Data Register Empty
&40  constant USART__TXAddr \ USART Tx Complete
&42  constant ADCAddr \ ADC Conversion Complete
&44  constant EE_READYAddr \ EEPROM Ready
&46  constant ANALOG_COMPAddr \ Analog Comparator
&48  constant TWIAddr \ Two-wire Serial Interface
&50  constant SPM_ReadyAddr \ Store Program Memory Read

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

: Eallot  ehere + to ehere ;
: Ebuffer: ehere constant Eallot ;

$C0 Evalue firstShield
$C2 Evalue lastShield
-$C0 Evalue ShieldError
Variable shield

00 Evalue MODE1

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
    0    i2c.tx     \ general address
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
    \ $100 u/mod swap i2c.tx i2c.tx        \ as this is always NUll we won't need it
    0 0 i2c.tx i2c.tx
    $100 u/mod swap i2c.tx i2c.tx
    i2c.stop
;

\ dealing with motor registers

\ M0 --> pwm = 8;  in2 = 9;  in1 = 10;
\ M1 --> pwm = 13; in2 = 12; in1 = 11;
\ M2 --> pwm = 2;  in2 = 3;  in1 = 4;
\ M3 --> pwm = 7;  in2 = 6;  in1 = 5;

: e, ( addr n -- adr+cell )
  over !e 1 cells + ;

\ Motortab hold the coresponding LED-reg.addresses of the four motors
24 Ebuffer: Motors

\ workaround: 2 + ... drop
Motors 2 +
       8 e,   9 e, &10 e,
     &13 e, &12 e, &11 e,
       2 e,   3 e,   4 e,
       7 e,   6 e,   5 e,
drop

: set_shield ( M-Nr -- M-Nr' )
    4 /mod 2* firstShield +       \ calculate shieldnr and motornr
    dup lastShield >              \ shieldnr too big?
    if
        ShieldError throw
    else
        shield !
    then
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
    do
        I shield ! 3 prescaler!
    loop
;

\ a trivial multitasking friendly ms
: ms 0 ?do pause 1ms loop ;
