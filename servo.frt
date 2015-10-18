\ This program creates a pwm signal on OC1A/PB1 to
\ drive a standard servo with a pulse between 1ms and 2ms
\ every 20ms.  The pulse width is determined by the voltage
\ at the ADC0 pin (0-5 volts), which can be controlled by
\ a potentiometer.  The pulse starts at 1.5ms.  Entering pwm
\ allows the voltage to control the pulse.  Pressing any
\ key sets the pulse to 1.5ms, ceases control of the pulse,
\ and returns the ok prompt.

\ Two useful words
\ or! ors value to contents of RAM address
\ 只操作一个字节
: or! ( n addr -- )
  dup c@ rot or swap c! ;

\ 先写高字节
\ high! is like ! but writes high byte first!
: high! ( n addr -- )
    over 8 rshift over 1+ c! c!
;

decimal

: pen-up ( -> )
  1350 OCR1A high!
;

: pen-down ( -> )
  1105 OCR1A high!
;

: servo-init
    1 1 lshift DDRB or!
    20000 ICR1 high!

    1 7 lshift
    1 1 lshift or
    TCCR1A c!

    1 4 lshift
    1 1 lshift or
    TCCR1B c!

    pen-up
;
