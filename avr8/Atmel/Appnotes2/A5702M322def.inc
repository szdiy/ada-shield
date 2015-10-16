;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : A5702M322def.inc
;* Title             : Register/Bit Definitions for the ATA5702M322
;* Created           : 2014-04-25 16:48
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5702M322
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _A5702M322DEF_INC_
#define _A5702M322DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5702M322
#pragma AVRPART ADMIN PART_NAME ATA5702M322
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x95
.equ	SIGNATURE_002	= 0x69

#pragma AVRPART CORE CORE_VERSION V3

; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SRCCAL	= 0x1F1 ; MEMORY MAPPED
.equ	TMOCR	= 0x1F0 ; MEMORY MAPPED
.equ	PDSCR	= 0x1EF ; MEMORY MAPPED
.equ	TWAMR	= 0x1EE ; MEMORY MAPPED
.equ	TWAR	= 0x1ED ; MEMORY MAPPED
.equ	TWDR	= 0x1EC ; MEMORY MAPPED
.equ	TWSR	= 0x1EB ; MEMORY MAPPED
.equ	TWCR	= 0x1EA ; MEMORY MAPPED
.equ	TWBR	= 0x1E9 ; MEMORY MAPPED
.equ	VMCR	= 0x1E6 ; MEMORY MAPPED
.equ	CLPR	= 0x1E5 ; MEMORY MAPPED
.equ	CMIMR	= 0x1E4 ; MEMORY MAPPED
.equ	CMCR	= 0x1E3 ; MEMORY MAPPED
.equ	PHCKCR	= 0x1E1 ; MEMORY MAPPED
.equ	PHCKSR	= 0x1E0 ; MEMORY MAPPED
.equ	PHCSRH	= 0x1DF ; MEMORY MAPPED
.equ	PHCSRL	= 0x1DE ; MEMORY MAPPED
.equ	PHCRPH	= 0x1DD ; MEMORY MAPPED
.equ	PHCRPL	= 0x1DC ; MEMORY MAPPED
.equ	PHCSTH	= 0x1DB ; MEMORY MAPPED
.equ	PHCSTL	= 0x1DA ; MEMORY MAPPED
.equ	PHCRCR	= 0x1D9 ; MEMORY MAPPED
.equ	PHIMR	= 0x1D8 ; MEMORY MAPPED
.equ	PHFC	= 0x1D7 ; MEMORY MAPPED
.equ	PHFI	= 0x1D6 ; MEMORY MAPPED
.equ	PHFD	= 0x1D5 ; MEMORY MAPPED
.equ	PHFRP	= 0x1D4 ; MEMORY MAPPED
.equ	PHFWP	= 0x1D3 ; MEMORY MAPPED
.equ	PHFL	= 0x1D2 ; MEMORY MAPPED
.equ	PHFS	= 0x1D1 ; MEMORY MAPPED
.equ	LFQC1	= 0x1A9 ; MEMORY MAPPED
.equ	LFQC2	= 0x1A8 ; MEMORY MAPPED
.equ	LFQC3	= 0x1A7 ; MEMORY MAPPED
.equ	PHTEMR	= 0x1A6 ; MEMORY MAPPED
.equ	PHDFR	= 0x1A5 ; MEMORY MAPPED
.equ	PHTBLR	= 0x1A4 ; MEMORY MAPPED
.equ	PHTCMR	= 0x1A2 ; MEMORY MAPPED
.equ	PHTCOR	= 0x1A1 ; MEMORY MAPPED
.equ	LFSTOP	= 0x1A0 ; MEMORY MAPPED
.equ	LFSYLE	= 0x19F ; MEMORY MAPPED
.equ	LFSYSY3	= 0x19E ; MEMORY MAPPED
.equ	LFSYSY2	= 0x19D ; MEMORY MAPPED
.equ	LFSYSY1	= 0x19C ; MEMORY MAPPED
.equ	LFSYSY0	= 0x19B ; MEMORY MAPPED
.equ	PHIDFR	= 0x19A ; MEMORY MAPPED
.equ	PHID1L	= 0x199 ; MEMORY MAPPED
.equ	PHID13	= 0x198 ; MEMORY MAPPED
.equ	PHID12	= 0x197 ; MEMORY MAPPED
.equ	PHID11	= 0x196 ; MEMORY MAPPED
.equ	PHID10	= 0x195 ; MEMORY MAPPED
.equ	PHID0L	= 0x194 ; MEMORY MAPPED
.equ	PHID03	= 0x193 ; MEMORY MAPPED
.equ	PHID02	= 0x192 ; MEMORY MAPPED
.equ	PHID01	= 0x191 ; MEMORY MAPPED
.equ	PHID00	= 0x190 ; MEMORY MAPPED
.equ	LFIMR	= 0x18F ; MEMORY MAPPED
.equ	LFCPR	= 0x18E ; MEMORY MAPPED
.equ	LFRSC3H	= 0x18D ; MEMORY MAPPED
.equ	LFRSC3L	= 0x18C ; MEMORY MAPPED
.equ	LFRSC2H	= 0x18B ; MEMORY MAPPED
.equ	LFRSC2L	= 0x18A ; MEMORY MAPPED
.equ	LFRSC1H	= 0x189 ; MEMORY MAPPED
.equ	LFRSC1L	= 0x188 ; MEMORY MAPPED
.equ	LFRSCR	= 0x187 ; MEMORY MAPPED
.equ	PHBCRR	= 0x186 ; MEMORY MAPPED
.equ	GPIOR6	= 0x185 ; MEMORY MAPPED
.equ	GPIOR5	= 0x184 ; MEMORY MAPPED
.equ	GPIOR4	= 0x183 ; MEMORY MAPPED
.equ	GPIOR3	= 0x182 ; MEMORY MAPPED
.equ	AESDR	= 0x181 ; MEMORY MAPPED
.equ	AESKR	= 0x180 ; MEMORY MAPPED
.equ	AESDPR	= 0x17F ; MEMORY MAPPED
.equ	LFRSMR	= 0x174 ; MEMORY MAPPED
.equ	TPCR5	= 0x173 ; MEMORY MAPPED
.equ	TPCR4	= 0x172 ; MEMORY MAPPED
.equ	TPCR3	= 0x171 ; MEMORY MAPPED
.equ	TPECMR	= 0x170 ; MEMORY MAPPED
.equ	TPECR4	= 0x16F ; MEMORY MAPPED
.equ	TPECR3	= 0x16E ; MEMORY MAPPED
.equ	TPECR2	= 0x16D ; MEMORY MAPPED
.equ	TPECR1	= 0x16C ; MEMORY MAPPED
.equ	TPDCR5	= 0x16B ; MEMORY MAPPED
.equ	TPDCR4	= 0x16A ; MEMORY MAPPED
.equ	TPDCR3	= 0x169 ; MEMORY MAPPED
.equ	TPDCR2	= 0x168 ; MEMORY MAPPED
.equ	TPDCR1	= 0x167 ; MEMORY MAPPED
.equ	TPIMR	= 0x166 ; MEMORY MAPPED
.equ	TPCR1	= 0x165 ; MEMORY MAPPED
.equ	DBEND	= 0x164 ; MEMORY MAPPED
.equ	T0CR	= 0x162 ; MEMORY MAPPED
.equ	PCIFR	= 0x161 ; MEMORY MAPPED
.equ	LFRSFR	= 0x160 ; MEMORY MAPPED
.equ	EEST	= 0x15B ; MEMORY MAPPED
.equ	EECR2	= 0x159 ; MEMORY MAPPED
.equ	SFIR	= 0x158 ; MEMORY MAPPED
.equ	SFFR	= 0x157 ; MEMORY MAPPED
.equ	DBGSW	= 0x156 ; MEMORY MAPPED
.equ	DBENC	= 0x155 ; MEMORY MAPPED
.equ	DBENB	= 0x154 ; MEMORY MAPPED
.equ	DBTC	= 0x153 ; MEMORY MAPPED
.equ	DBCR	= 0x152 ; MEMORY MAPPED
.equ	LFDSRR	= 0x151 ; MEMORY MAPPED
.equ	CRCDOR	= 0x146 ; MEMORY MAPPED
.equ	CRCCR	= 0x145 ; MEMORY MAPPED
.equ	TMCR1	= 0x12E ; MEMORY MAPPED
.equ	TMCR2	= 0x12D ; MEMORY MAPPED
.equ	TMSR	= 0x12C ; MEMORY MAPPED
.equ	TMSSC	= 0x12B ; MEMORY MAPPED
.equ	TMTLLH	= 0x12A ; MEMORY MAPPED
.equ	TMTLLL	= 0x129 ; MEMORY MAPPED
.equ	TMSHR	= 0x128 ; MEMORY MAPPED
.equ	TMCPH	= 0x127 ; MEMORY MAPPED
.equ	TMCPL	= 0x126 ; MEMORY MAPPED
.equ	TMCIH	= 0x125 ; MEMORY MAPPED
.equ	TMCIL	= 0x124 ; MEMORY MAPPED
.equ	TMCSB	= 0x123 ; MEMORY MAPPED
.equ	TMCRCH	= 0x122 ; MEMORY MAPPED
.equ	TMCRCL	= 0x121 ; MEMORY MAPPED
.equ	TMFSM	= 0x120 ; MEMORY MAPPED
.equ	FEANT	= 0x10D ; MEMORY MAPPED
.equ	FEALR	= 0x10C ; MEMORY MAPPED
.equ	FEVCO	= 0x10B ; MEMORY MAPPED
.equ	FECR	= 0x10A ; MEMORY MAPPED
.equ	FETN4	= 0x109 ; MEMORY MAPPED
.equ	FEMS	= 0x108 ; MEMORY MAPPED
.equ	FEBT	= 0x107 ; MEMORY MAPPED
.equ	FEVCT	= 0x106 ; MEMORY MAPPED
.equ	FEPAC	= 0x105 ; MEMORY MAPPED
.equ	FEAT	= 0x104 ; MEMORY MAPPED
.equ	FEEN2	= 0x102 ; MEMORY MAPPED
.equ	FEEN1	= 0x101 ; MEMORY MAPPED
.equ	FESR	= 0x100 ; MEMORY MAPPED
.equ	TRCDR	= 0xFF ; MEMORY MAPPED
.equ	TRCIDH	= 0xFD ; MEMORY MAPPED
.equ	TRCIDL	= 0xFC ; MEMORY MAPPED
.equ	MSMCR4	= 0xEF ; MEMORY MAPPED
.equ	MSMCR3	= 0xEE ; MEMORY MAPPED
.equ	MSMCR2	= 0xED ; MEMORY MAPPED
.equ	MSMCR1	= 0xEC ; MEMORY MAPPED
.equ	SSMSTR	= 0xEA ; MEMORY MAPPED
.equ	MSMSTR	= 0xE9 ; MEMORY MAPPED
.equ	SSMIMR	= 0xE8 ; MEMORY MAPPED
.equ	SSMIFR	= 0xE7 ; MEMORY MAPPED
.equ	SSMSR	= 0xE6 ; MEMORY MAPPED
.equ	SSMRR	= 0xE5 ; MEMORY MAPPED
.equ	SSMFBR	= 0xE4 ; MEMORY MAPPED
.equ	SSMCR	= 0xE2 ; MEMORY MAPPED
.equ	SFC	= 0xE1 ; MEMORY MAPPED
.equ	SFI	= 0xE0 ; MEMORY MAPPED
.equ	SFD	= 0xDF ; MEMORY MAPPED
.equ	SFRP	= 0xDE ; MEMORY MAPPED
.equ	SFWP	= 0xDD ; MEMORY MAPPED
.equ	SFL	= 0xDC ; MEMORY MAPPED
.equ	SFS	= 0xDB ; MEMORY MAPPED
.equ	DFC	= 0xDA ; MEMORY MAPPED
.equ	DFI	= 0xD9 ; MEMORY MAPPED
.equ	DFD	= 0xD8 ; MEMORY MAPPED
.equ	DFRP	= 0xD7 ; MEMORY MAPPED
.equ	DFWP	= 0xD6 ; MEMORY MAPPED
.equ	DFL	= 0xD5 ; MEMORY MAPPED
.equ	DFTLH	= 0xD4 ; MEMORY MAPPED
.equ	DFTLL	= 0xD3 ; MEMORY MAPPED
.equ	DFS	= 0xD2 ; MEMORY MAPPED
.equ	SUPCR	= 0xCC ; MEMORY MAPPED
.equ	SUPFR	= 0xCB ; MEMORY MAPPED
.equ	CMOCR	= 0xCA ; MEMORY MAPPED
.equ	CMSR	= 0xC9 ; MEMORY MAPPED
.equ	FRCCAL	= 0xC7 ; MEMORY MAPPED
.equ	MRCCAL	= 0xC6 ; MEMORY MAPPED
.equ	CLKOCR	= 0xC4 ; MEMORY MAPPED
.equ	CLKOD	= 0xC3 ; MEMORY MAPPED
.equ	GTCCR	= 0x90 ; MEMORY MAPPED
.equ	T5IMR	= 0x8F ; MEMORY MAPPED
.equ	T5CNTH	= 0x8E ; MEMORY MAPPED
.equ	T5CNTL	= 0x8D ; MEMORY MAPPED
.equ	T5CCR	= 0x8C ; MEMORY MAPPED
.equ	T5OCRH	= 0x8B ; MEMORY MAPPED
.equ	T5OCRL	= 0x8A ; MEMORY MAPPED
.equ	T5TEMP	= 0x89 ; MEMORY MAPPED
.equ	T4IMR	= 0x88 ; MEMORY MAPPED
.equ	T4MRB	= 0x87 ; MEMORY MAPPED
.equ	T4MRA	= 0x86 ; MEMORY MAPPED
.equ	T4ICRH	= 0x85 ; MEMORY MAPPED
.equ	T4ICRL	= 0x84 ; MEMORY MAPPED
.equ	T4CORH	= 0x83 ; MEMORY MAPPED
.equ	T4CORL	= 0x82 ; MEMORY MAPPED
.equ	T4CNTH	= 0x81 ; MEMORY MAPPED
.equ	T4CNTL	= 0x80 ; MEMORY MAPPED
.equ	T3IMR	= 0x7F ; MEMORY MAPPED
.equ	T3MRB	= 0x7E ; MEMORY MAPPED
.equ	T3MRA	= 0x7D ; MEMORY MAPPED
.equ	T3ICRH	= 0x7C ; MEMORY MAPPED
.equ	T3ICRL	= 0x7B ; MEMORY MAPPED
.equ	T3CORH	= 0x7A ; MEMORY MAPPED
.equ	T3CORL	= 0x79 ; MEMORY MAPPED
.equ	T3CNTH	= 0x78 ; MEMORY MAPPED
.equ	T3CNTL	= 0x77 ; MEMORY MAPPED
.equ	T2IMR	= 0x76 ; MEMORY MAPPED
.equ	T2MR	= 0x75 ; MEMORY MAPPED
.equ	T2COR	= 0x74 ; MEMORY MAPPED
.equ	T2CNT	= 0x73 ; MEMORY MAPPED
.equ	T1IMR	= 0x72 ; MEMORY MAPPED
.equ	T1MR	= 0x71 ; MEMORY MAPPED
.equ	T1COR	= 0x70 ; MEMORY MAPPED
.equ	T1CNT	= 0x6F ; MEMORY MAPPED
.equ	WDTCR	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6D ; MEMORY MAPPED
.equ	PCMSK0	= 0x6C ; MEMORY MAPPED
.equ	EICRA	= 0x6B ; MEMORY MAPPED
.equ	FFREQ2H	= 0x69 ; MEMORY MAPPED
.equ	FFREQ2M	= 0x68 ; MEMORY MAPPED
.equ	FFREQ2L	= 0x67 ; MEMORY MAPPED
.equ	FFREQ1H	= 0x66 ; MEMORY MAPPED
.equ	FFREQ1M	= 0x65 ; MEMORY MAPPED
.equ	FFREQ1L	= 0x64 ; MEMORY MAPPED
.equ	GACDIVH	= 0x63 ; MEMORY MAPPED
.equ	GACDIVL	= 0x62 ; MEMORY MAPPED
.equ	FSFCR	= 0x61 ; MEMORY MAPPED
.equ	FSEN	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	LFCR3	= 0x3B ; 
.equ	LFCR2	= 0x3A ; 
.equ	TPSR	= 0x39 ; 
.equ	SMCR	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	T0IFR	= 0x32 ; 
.equ	DWDR	= 0x31 ; 
.equ	LFCR1	= 0x30 ; 
.equ	LFCR0	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	MCUSR	= 0x2B ; 
.equ	VMSR	= 0x2A ; 
.equ	CRCDIR	= 0x29 ; 
.equ	EIFR	= 0x28 ; 
.equ	EIMSK	= 0x27 ; 
.equ	PCICR	= 0x26 ; 
.equ	GPIOR2	= 0x25 ; 
.equ	GPIOR1	= 0x24 ; 
.equ	EEPR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	AESSR	= 0x1E ; 
.equ	AESCR	= 0x1D ; 
.equ	LFFR	= 0x1C ; 
.equ	PHFR	= 0x1B ; 
.equ	PRR0	= 0x1A ; 
.equ	T5IFR	= 0x19 ; 
.equ	T4IFR	= 0x18 ; 
.equ	T3IFR	= 0x17 ; 
.equ	T2IFR	= 0x16 ; 
.equ	T1IFR	= 0x15 ; 
.equ	T4CR	= 0x14 ; 
.equ	T3CR	= 0x13 ; 
.equ	T2CR	= 0x12 ; 
.equ	T1CR	= 0x11 ; 
.equ	FSCR	= 0x0F ; 
.equ	MCUCR	= 0x0E ; 
.equ	TPFR	= 0x0D ; 
.equ	TPCR2	= 0x0C ; 
.equ	PORTD	= 0x0B ; 
.equ	DDRD	= 0x0A ; 
.equ	PIND	= 0x09 ; 
.equ	PORTC	= 0x08 ; 
.equ	DDRC	= 0x07 ; 
.equ	PINC	= 0x06 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	PRR2	= 0x02 ; 
.equ	PRR1	= 0x01 ; 
.equ	GPIOR0	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** AES *****************
; AESCR - AES Control Register
.equ	AESWK	= 0 ; AES Write Key
.equ	AESWD	= 1 ; AES Write Data
.equ	AESIM	= 2 ; AES Interrupt Mask
.equ	AESD	= 3 ; AES Direction
.equ	AESXOR	= 4 ; AES State XOR load
.equ	AESRES	= 5 ; AES Reset
.equ	AESLKM	= 6 ; AES Load Key Memory
.equ	AESE	= 7 ; AES Enable

; AESDPR - AES Data Pointer Register
.equ	AESDPR0	= 0 ; AES Data Pointer Register Bit 0
.equ	AESDPR1	= 1 ; AES Data Pointer Register Bit 1
.equ	AESDPR2	= 2 ; AES Data Pointer Register Bit 2
.equ	AESDPR3	= 3 ; AES Data Pointer Register Bit 3

; AESDR - AES Data Register
.equ	AESDR0	= 0 ; AES Data Register Bit 0
.equ	AESDR1	= 1 ; AES Data Register Bit 1
.equ	AESDR2	= 2 ; AES Data Register Bit 2
.equ	AESDR3	= 3 ; AES Data Register Bit 3
.equ	AESDR4	= 4 ; AES Data Register Bit 4
.equ	AESDR5	= 5 ; AES Data Register Bit 5
.equ	AESDR6	= 6 ; AES Data Register Bit 6
.equ	AESDR7	= 7 ; AES Data Register Bit 7

; AESKR - AES Key Register
.equ	AESKR0	= 0 ; AES Key Register Bit 0
.equ	AESKR1	= 1 ; AES Key Register Bit 1
.equ	AESKR2	= 2 ; AES Key Register Bit 2
.equ	AESKR3	= 3 ; AES Key Register Bit 3
.equ	AESKR4	= 4 ; AES Key Register Bit 4
.equ	AESKR5	= 5 ; AES Key Register Bit 5
.equ	AESKR6	= 6 ; AES Key Register Bit 6
.equ	AESKR7	= 7 ; AES Key Register Bit 7

; AESSR - AES Status Register
.equ	AESRF	= 0 ; AES Ready Flag
.equ	AESERF	= 7 ; AES Error Flag


; ***** CLK *****************
; CLKOCR - Clock output control Register
.equ	CLKOS0	= 0 ; Clock output source
.equ	CLKOS1	= 1 ; Clock output source
.equ	CLKOEN	= 2 ; Clock output driver enable

; CLKOD - Clock output divider settings Register
.equ	CLKOD0	= 0 ; Clock output divider settings Register Bit 0
.equ	CLKOD1	= 1 ; Clock output divider settings Register Bit 1
.equ	CLKOD2	= 2 ; Clock output divider settings Register Bit 2
.equ	CLKOD3	= 3 ; Clock output divider settings Register Bit 3
.equ	CLKOD4	= 4 ; Clock output divider settings Register Bit 4
.equ	CLKOD5	= 5 ; Clock output divider settings Register Bit 5
.equ	CLKOD6	= 6 ; Clock output divider settings Register Bit 6
.equ	CLKOD7	= 7 ; Clock output divider settings Register Bit 7

; CMOCR - Clock management override control register
.equ	FRCAO	= 0 ; FRC Always On
.equ	MRCAO	= 1 ; MRC Always On
.equ	FRCACT	= 2 ; FRC Active

; CMSR - Clock management status Register
.equ	ECF	= 0 ; External clock fail

; FRCCAL - Fast RC oscillator calibration Register
.equ	FRCCAL0	= 0 ; Fast RC oscillator calibration Register Bit 0
.equ	FRCCAL1	= 1 ; Fast RC oscillator calibration Register Bit 1
.equ	FRCCAL2	= 2 ; Fast RC oscillator calibration Register Bit 2
.equ	FRCCAL3	= 3 ; Fast RC oscillator calibration Register Bit 3
.equ	FRCCAL4	= 4 ; Fast RC oscillator calibration Register Bit 4

; MRCCAL - Middle RC oscillator calibration Register
.equ	MRCCAL0	= 1 ; Middle RC oscillator calibration Register Bit 0
.equ	MRCCAL1	= 2 ; Middle RC oscillator calibration Register Bit 1
.equ	MRCCAL2	= 3 ; Middle RC oscillator calibration Register Bit 2
.equ	MRCCAL3	= 4 ; Middle RC oscillator calibration Register Bit 3
.equ	MRCCAL4	= 5 ; Middle RC oscillator calibration Register Bit 4
.equ	MRCCAL5	= 6 ; Middle RC oscillator calibration Register Bit 5
.equ	MRCCAL6	= 7 ; Middle RC oscillator calibration Register Bit 6

; PRR0 - Power reduction Register 0
.equ	PRSPI	= 0 ; Power Reduction Serial Peripheral Interface
.equ	PRTXDC	= 2 ; Power Reduction Transmit DSP Control
.equ	PRCRC	= 3 ; Power Reduction CRC
.equ	PRVM	= 4 ; Power Reduction Voltage Monitor
.equ	PRCO	= 5 ; Power Reduction Clock Output
.equ	PRCU	= 6 ; Power Reduction Crypto Unit
.equ	PRTWI	= 7 ; Power Reduction Two Wire Interface

; PRR1 - Power reduction Register 1
.equ	PRT1	= 0 ; Power Reduction Timer 1
.equ	PRT2	= 1 ; Power Reduction Timer 2
.equ	PRT3	= 2 ; Power Reduction Timer 3
.equ	PRT4	= 3 ; Power Reduction Timer 4
.equ	PRT5	= 4 ; Power Reduction Timer 5
.equ	PRLFR	= 5 ; Power Reduction LF Receiver
.equ	PRCI	= 6 ; Power Reduction Contactless Interface

; PRR2 - Power reduction register 2
.equ	PRSF	= 2 ; Power Reduction Preamble/RSSI FIFO
.equ	PRDF	= 3 ; Power Reduction Data FIFO
.equ	PRTM	= 6 ; Power Reduction Tx Modulator
.equ	PRSSM	= 7 ; Power Reduction Sequencer State Machine


; ***** CPU *****************
; CLPR - Clock Prescaler Register
.equ	CLKPS0	= 0 ; System Clock Prescaler Select
.equ	CLKPS1	= 1 ; System Clock Prescaler Select
.equ	CLKPS2	= 2 ; System Clock Prescaler Select
.equ	CLTPS0	= 3 ; Timer Clock Prescaler Select
.equ	CLTPS1	= 4 ; Timer Clock Prescaler Select
.equ	CLTPS2	= 5 ; Timer Clock Prescaler Select
.equ	CLPCE	= 7 ; Clock Prescaler Change Enable

; CMCR - Clock Management Control Register
.equ	CMM0	= 0 ; Clock Management Mode
.equ	CMM1	= 1 ; Clock Management Mode
.equ	CMM2	= 2 ; Clock Management Mode
.equ	CCS	= 3 ; Core Clock Select
.equ	CMONEN	= 6 ; Clock monitor enable
.equ	CMCCE	= 7 ; Clock management control change enable

; CMIMR - Clock interrupt mask Register
.equ	ECIE	= 0 ; External clock interrupt enable

; DWDR - Debug Wire Data Register
.equ	DWDR0	= 0 ; Debug Wire Data Register Bit 0
.equ	DWDR1	= 1 ; Debug Wire Data Register Bit 1
.equ	DWDR2	= 2 ; Debug Wire Data Register Bit 2
.equ	DWDR3	= 3 ; Debug Wire Data Register Bit 3
.equ	DWDR4	= 4 ; Debug Wire Data Register Bit 4
.equ	DWDR5	= 5 ; Debug Wire Data Register Bit 5
.equ	DWDR6	= 6 ; Debug Wire Data Register Bit 6
.equ	DWDR7	= 7 ; Debug Wire Data Register Bit 7

; MCUCR - MCU control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	SPIIO	= 2 ; SPI Interrupt Only
.equ	ENPS	= 3 ; Enable Port Settings
.equ	PUD	= 4 ; Pull-up Resistors Disable
.equ	TRCCE	= 5 ; Trace Change Enable
.equ	TRCEN	= 6 ; Trace Enable

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-On Reset Flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	BODRF	= 2 ; Brown Out Detection Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	TPRF	= 5 ; Transponder Reset Flag
.equ	DVCCRF	= 6 ; DVCC Reset Flag

; SMCR - Sleep mode control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select
.equ	SM1	= 2 ; Sleep Mode Select
.equ	SM2	= 3 ; Sleep Mode Select

; SP - Stack Pointer
.equ	SPH0	= 0 ; Stack Pointer High Bit 8
.equ	SPH1	= 1 ; Stack Pointer High Bit 9
.equ	SPH2	= 2 ; Stack Pointer High Bit 10

.equ	SPL0	= 0 ; Stack Pointer Low Bit 0
.equ	SPL1	= 1 ; Stack Pointer Low Bit 1
.equ	SPL2	= 2 ; Stack Pointer Low Bit 2
.equ	SPL3	= 3 ; Stack Pointer Low Bit 3
.equ	SPL4	= 4 ; Stack Pointer Low Bit 4
.equ	SPL5	= 5 ; Stack Pointer Low Bit 5
.equ	SPL6	= 6 ; Stack Pointer Low Bit 6
.equ	SPL7	= 7 ; Stack Pointer Low Bit 7

; SPMCSR - Store Program Memory Control and Status Register
.equ	SELFPRGEN	= 0 ; Self Programming Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	SPMIE	= 7 ; SPM Interrupt Enable

; SREG - Status Register
.equ	SREG_C	= 0 ; Carry Flag
.equ	SREG_Z	= 1 ; Zero Flag
.equ	SREG_N	= 2 ; Negative Flag
.equ	SREG_V	= 3 ; Two's Complement Overflow Flag
.equ	SREG_S	= 4 ; Sign Bit
.equ	SREG_H	= 5 ; Half Carry Flag
.equ	SREG_T	= 6 ; Bit Copy Storage
.equ	SREG_I	= 7 ; Global Interrupt Enable


; ***** CRC *****************
; CRCCR - CRC Control Register
.equ	CRCRS	= 0 ; CRC Data Register Reset
.equ	REFLI	= 1 ; Reflect Data Input Byte
.equ	REFLO	= 2 ; Reflect Data Output Byte

; CRCDIR - CRC Data Input Register
.equ	CRCDIR0	= 0 ; CRC Data Input Register Bit 0
.equ	CRCDIR1	= 1 ; CRC Data Input Register Bit 1
.equ	CRCDIR2	= 2 ; CRC Data Input Register Bit 2
.equ	CRCDIR3	= 3 ; CRC Data Input Register Bit 3
.equ	CRCDIR4	= 4 ; CRC Data Input Register Bit 4
.equ	CRCDIR5	= 5 ; CRC Data Input Register Bit 5
.equ	CRCDIR6	= 6 ; CRC Data Input Register Bit 6
.equ	CRCDIR7	= 7 ; CRC Data Input Register Bit 7

; CRCDOR - CRC Data Output Register
.equ	CRCDOR0	= 0 ; CRC Data Output Register Bit 0
.equ	CRCDOR1	= 1 ; CRC Data Output Register Bit 1
.equ	CRCDOR2	= 2 ; CRC Data Output Register Bit 2
.equ	CRCDOR3	= 3 ; CRC Data Output Register Bit 3
.equ	CRCDOR4	= 4 ; CRC Data Output Register Bit 4
.equ	CRCDOR5	= 5 ; CRC Data Output Register Bit 5
.equ	CRCDOR6	= 6 ; CRC Data Output Register Bit 6
.equ	CRCDOR7	= 7 ; CRC Data Output Register Bit 7


; ***** DEBOUNCE *****************
; DBCR - DeBounce Control Register
.equ	DBMD	= 0 ; Debounce Mode
.equ	DBCS	= 1 ; Debounce Clock Select
.equ	DBTMS	= 2 ; Debounce Timer Mask Select
.equ	DBHA	= 3 ; Debounce Handshake Active

; DBENB - DeBounce Enable Port B
.equ	DBENB0	= 0 ; DeBounce Enable Port B Bit 0
.equ	DBENB1	= 1 ; DeBounce Enable Port B Bit 1
.equ	DBENB2	= 2 ; DeBounce Enable Port B Bit 2
.equ	DBENB3	= 3 ; DeBounce Enable Port B Bit 3
.equ	DBENB4	= 4 ; DeBounce Enable Port B Bit 4
.equ	DBENB5	= 5 ; DeBounce Enable Port B Bit 5
.equ	DBENB6	= 6 ; DeBounce Enable Port B Bit 6
.equ	DBENB7	= 7 ; DeBounce Enable Port B Bit 7

; DBENC - DeBounce Enable Port C
.equ	DBENC0	= 0 ; DeBounce Enable Port C Bit 0
.equ	DBENC1	= 1 ; DeBounce Enable Port C Bit 1
.equ	DBENC2	= 2 ; DeBounce Enable Port C Bit 2

; DBEND - DeBounce Enable Port D
.equ	DBEND0	= 0 ; DeBounce Enable Port D Bit 0
.equ	DBEND1	= 1 ; DeBounce Enable Port D Bit 1
.equ	DBEND2	= 2 ; DeBounce Enable Port D Bit 2
.equ	DBEND3	= 3 ; DeBounce Enable Port D Bit 3
.equ	DBEND4	= 4 ; DeBounce Enable Port D Bit 4
.equ	DBEND5	= 5 ; DeBounce Enable Port D Bit 5
.equ	DBEND6	= 6 ; DeBounce Enable Port D Bit 6
.equ	DBEND7	= 7 ; DeBounce Enable Port D Bit 7

; DBTC - Debounce Timer Compare Register
.equ	DBTC0	= 0 ; Debounce Timer Compare Register Bit 0
.equ	DBTC1	= 1 ; Debounce Timer Compare Register Bit 1
.equ	DBTC2	= 2 ; Debounce Timer Compare Register Bit 2
.equ	DBTC3	= 3 ; Debounce Timer Compare Register Bit 3
.equ	DBTC4	= 4 ; Debounce Timer Compare Register Bit 4
.equ	DBTC5	= 5 ; Debounce Timer Compare Register Bit 5
.equ	DBTC6	= 6 ; Debounce Timer Compare Register Bit 6
.equ	DBTC7	= 7 ; Debounce Timer Compare Register Bit 7


; ***** DEBUG *****************
; DBGSW - Debugging Support Switch
.equ	DBGGS0	= 0 ; Debugging Support Group Select
.equ	DBGGS1	= 1 ; Debugging Support Group Select
.equ	DBGGS2	= 2 ; Debugging Support Group Select
.equ	DBGGS3	= 3 ; Debugging Support Group Select
.equ	CPBFOS0	= 4 ; CPU Busy Flag Output Select
.equ	CPBFOS1	= 5 ; CPU Busy Flag Output Select
.equ	CPBF	= 6 ; CPU Busy Flag
.equ	ATEST	= 7 ; Analog Test Pins Enable

; TRCDR - Trace Data Register
.equ	TRCDR0	= 0 ; Trace Data Register Bit 0
.equ	TRCDR1	= 1 ; Trace Data Register Bit 1
.equ	TRCDR2	= 2 ; Trace Data Register Bit 2
.equ	TRCDR3	= 3 ; Trace Data Register Bit 3
.equ	TRCDR4	= 4 ; Trace Data Register Bit 4
.equ	TRCDR5	= 5 ; Trace Data Register Bit 5
.equ	TRCDR6	= 6 ; Trace Data Register Bit 6
.equ	TRCDR7	= 7 ; Trace Data Register Bit 7

; TRCID - Trace ID Register
.equ	TRCIDH0	= 0 ; Trace ID Register High Bit 8
.equ	TRCIDH1	= 1 ; Trace ID Register High Bit 9
.equ	TRCIDH2	= 2 ; Trace ID Register High Bit 10
.equ	TRCIDH3	= 3 ; Trace ID Register High Bit 11
.equ	TRCIDH4	= 4 ; Trace ID Register High Bit 12
.equ	TRCIDH5	= 5 ; Trace ID Register High Bit 13
.equ	TRCIDH6	= 6 ; Trace ID Register High Bit 14
.equ	TRCIDH7	= 7 ; Trace ID Register High Bit 15

.equ	TRCIDL0	= 0 ; Trace ID Register Low Bit 0
.equ	TRCIDL1	= 1 ; Trace ID Register Low Bit 1
.equ	TRCIDL2	= 2 ; Trace ID Register Low Bit 2
.equ	TRCIDL3	= 3 ; Trace ID Register Low Bit 3
.equ	TRCIDL4	= 4 ; Trace ID Register Low Bit 4
.equ	TRCIDL5	= 5 ; Trace ID Register Low Bit 5
.equ	TRCIDL6	= 6 ; Trace ID Register Low Bit 6
.equ	TRCIDL7	= 7 ; Trace ID Register Low Bit 7


; ***** DFIFO *****************
; DFC - Data FIFO Configuration Register
.equ	DFFLC0	= 0 ; Data FIFO Fill-Level Configuration
.equ	DFFLC1	= 1 ; Data FIFO Fill-Level Configuration
.equ	DFFLC2	= 2 ; Data FIFO Fill-Level Configuration
.equ	DFFLC3	= 3 ; Data FIFO Fill-Level Configuration
.equ	DFFLC4	= 4 ; Data FIFO Fill-Level Configuration
.equ	DFFLC5	= 5 ; Data FIFO Fill-Level Configuration
.equ	DFDRA	= 7 ; Data FIFO Direct Read Access Operational Mode

; DFD - Data FIFO Data Register
.equ	DFD0	= 0 ; Data FIFO Data Register Bit 0
.equ	DFD1	= 1 ; Data FIFO Data Register Bit 1
.equ	DFD2	= 2 ; Data FIFO Data Register Bit 2
.equ	DFD3	= 3 ; Data FIFO Data Register Bit 3
.equ	DFD4	= 4 ; Data FIFO Data Register Bit 4
.equ	DFD5	= 5 ; Data FIFO Data Register Bit 5
.equ	DFD6	= 6 ; Data FIFO Data Register Bit 6
.equ	DFD7	= 7 ; Data FIFO Data Register Bit 7

; DFI - Data FIFO Interrupt Mask Register
.equ	DFFLIM	= 0 ; Data FIFO Fill-level Interrupt Mask
.equ	DFERIM	= 1 ; Data FIFO Error Interrupt Mask

; DFL - Data FIFO Fill Level Register
.equ	DFFLS0	= 0 ; Data FIFO Fill Level Status
.equ	DFFLS1	= 1 ; Data FIFO Fill Level Status
.equ	DFFLS2	= 2 ; Data FIFO Fill Level Status
.equ	DFFLS3	= 3 ; Data FIFO Fill Level Status
.equ	DFFLS4	= 4 ; Data FIFO Fill Level Status
.equ	DFFLS5	= 5 ; Data FIFO Fill Level Status
.equ	DFCLR	= 7 ; Data FIFO Clear

; DFRP - Data FIFO Read Pointer
.equ	DFRP0	= 0 ; Data FIFO Read Pointer Bit 0
.equ	DFRP1	= 1 ; Data FIFO Read Pointer Bit 1
.equ	DFRP2	= 2 ; Data FIFO Read Pointer Bit 2
.equ	DFRP3	= 3 ; Data FIFO Read Pointer Bit 3
.equ	DFRP4	= 4 ; Data FIFO Read Pointer Bit 4
.equ	DFRP5	= 5 ; Data FIFO Read Pointer Bit 5

; DFS - Data FIFO Status Register
.equ	DFFLRF	= 0 ; Data FIFO Fill-Level Reached Status Flag
.equ	DFUFL	= 1 ; Data FIFO Underflow Flag
.equ	DFOFL	= 2 ; Data FIFO Overflow Flag

; DFTL - Data FIFO Telegram Length
.equ	DFTLH0	= 0 ; Data FIFO Telegram Length High Bit 8
.equ	DFTLH1	= 1 ; Data FIFO Telegram Length High Bit 9
.equ	DFTLH2	= 2 ; Data FIFO Telegram Length High Bit 10
.equ	DFTLH3	= 3 ; Data FIFO Telegram Length High Bit 11

.equ	DFTLL0	= 0 ; Data FIFO Telegram Length Low Bit 0
.equ	DFTLL1	= 1 ; Data FIFO Telegram Length Low Bit 1
.equ	DFTLL2	= 2 ; Data FIFO Telegram Length Low Bit 2
.equ	DFTLL3	= 3 ; Data FIFO Telegram Length Low Bit 3
.equ	DFTLL4	= 4 ; Data FIFO Telegram Length Low Bit 4
.equ	DFTLL5	= 5 ; Data FIFO Telegram Length Low Bit 5
.equ	DFTLL6	= 6 ; Data FIFO Telegram Length Low Bit 6
.equ	DFTLL7	= 7 ; Data FIFO Telegram Length Low Bit 7

; DFWP - Data FIFO Write Pointer
.equ	DFWP0	= 0 ; Data FIFO Write Pointer Bit 0
.equ	DFWP1	= 1 ; Data FIFO Write Pointer Bit 1
.equ	DFWP2	= 2 ; Data FIFO Write Pointer Bit 2
.equ	DFWP3	= 3 ; Data FIFO Write Pointer Bit 3
.equ	DFWP4	= 4 ; Data FIFO Write Pointer Bit 4
.equ	DFWP5	= 5 ; Data FIFO Write Pointer Bit 5


; ***** EEPROM *****************
; EEAR - EEPROM Address Register
.equ	EEARH0	= 0 ; EEPROM Address Register High Bit 8
.equ	EEARH1	= 1 ; EEPROM Address Register High Bit 9
.equ	EEARH2	= 2 ; EEPROM Address Register High Bit 10
.equ	EEARH3	= 3 ; EEPROM Address Register High Bit 11

.equ	EEARL0	= 0 ; EEPROM Address Register Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Address Register Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Address Register Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Address Register Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Address Register Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Address Register Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Address Register Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Address Register Low Bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0 ; EEPROM Read Enable
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode
.equ	EEPM1	= 5 ; EEPROM Programming Mode
.equ	EEPAGE	= 6 ; EEPROM page access (multiple bytes access mode)
.equ	NVMBSY	= 7 ; Non-volatile memory busy

; EECR2 - EEPROM Control Register 2
.equ	EEBRE	= 0 ; EEPROM Burst Read Enable
.equ	E2CIM	= 1 ; EEPROM Error Code Correction Interrupt Mask
.equ	E2FF	= 6 ; EEPROM error Fault Flag bit
.equ	E2CF	= 7 ; EEPROM Error Correction Code Flag

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0 ; EEPROM Data Register Bit 0
.equ	EEDR1	= 1 ; EEPROM Data Register Bit 1
.equ	EEDR2	= 2 ; EEPROM Data Register Bit 2
.equ	EEDR3	= 3 ; EEPROM Data Register Bit 3
.equ	EEDR4	= 4 ; EEPROM Data Register Bit 4
.equ	EEDR5	= 5 ; EEPROM Data Register Bit 5
.equ	EEDR6	= 6 ; EEPROM Data Register Bit 6
.equ	EEDR7	= 7 ; EEPROM Data Register Bit 7

; EEPR - EEPROM Protection Register
.equ	EEAP0	= 0 ; EEPROM Access Protection
.equ	EEAP1	= 1 ; EEPROM Access Protection
.equ	EEAP2	= 2 ; EEPROM Access Protection
.equ	EEAP3	= 3 ; EEPROM Access Protection


; ***** FE *****************
; FEALR - Front-End Antenna Level Detector Range
.equ	RNGE0	= 0 ; Range of the ANT_TUNE level detector
.equ	RNGE1	= 1 ; Range of the ANT_TUNE level detector

; FEANT - Front-End Antenna
.equ	LVLC0	= 0 ; antenna signal LeVeL
.equ	LVLC1	= 1 ; antenna signal LeVeL
.equ	LVLC2	= 2 ; antenna signal LeVeL
.equ	LVLC3	= 3 ; antenna signal LeVeL

; FEAT - Front-End Antenna Tuning
.equ	ANTN0	= 0 ; Antenna Tuning
.equ	ANTN1	= 1 ; Antenna Tuning
.equ	ANTN2	= 2 ; Antenna Tuning
.equ	ANTN3	= 3 ; Antenna Tuning

; FEBT - Front-End RC Tuning Register
.equ	CTN20	= 0 ; Capacitor Tuning
.equ	CTN21	= 1 ; Capacitor Tuning
.equ	RTN20	= 2 ; Resistor Tuning
.equ	RTN21	= 3 ; Resistor Tuning

; FECR - Front-End Control Register
.equ	LBNHB	= 0 ; Select Low-Band Not High-Band
.equ	S4N3	= 1 ; Select 433 Not 315MHz Band
.equ	PLCKG	= 4 ; PLL Lock Detect Gate
.equ	ANPS	= 5 ; ASK Not DPSK Switch

; FEEN1 - Front-End Enable Register 1
.equ	PLEN	= 0 ; PLL enable
.equ	PLCAL	= 1 ; PLL calibration mode
.equ	XTOEN	= 2 ; Cristal Oscillator enable
.equ	PLSP1	= 6 ; PLL Speedup 1
.equ	ATEN	= 7 ; Antenna Tuning Enable

; FEEN2 - Front-End Enable Register 2
.equ	PAEN	= 2 ; Power Amplifier enable
.equ	PLPEN	= 4 ; PLL Post En IQ divider
.equ	CPBIA	= 6 ; Cap Array Bias

; FEMS - Front-End Main and Swallow Control Register
.equ	PLLS0	= 0 ; PLL Swallow
.equ	PLLS1	= 1 ; PLL Swallow
.equ	PLLS2	= 2 ; PLL Swallow
.equ	PLLS3	= 3 ; PLL Swallow
.equ	PLLM0	= 4 ; PLL Mode
.equ	PLLM1	= 5 ; PLL Mode
.equ	PLLM2	= 6 ; PLL Mode
.equ	PLLM3	= 7 ; PLL Mode

; FEPAC - Front-End Power Amplifier Control Register
.equ	PACR0	= 0 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR1	= 1 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR2	= 2 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR3	= 3 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR4	= 4 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR5	= 5 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR6	= 6 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR7	= 7 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand

; FESR - Front-End Status Register
.equ	XRDY	= 2 ; XTO ready
.equ	PLCK	= 3 ; PLL locked
.equ	ANTS	= 4 ; Antenna saturated

; FETN4 - Front-End RC Tuning 4bit Register
.equ	CTN40	= 0 ; 4 bit Capacitor Tuning
.equ	CTN41	= 1 ; 4 bit Capacitor Tuning
.equ	CTN42	= 2 ; 4 bit Capacitor Tuning
.equ	CTN43	= 3 ; 4 bit Capacitor Tuning
.equ	RTN40	= 4 ; 4 bit Resistor Tuning
.equ	RTN41	= 5 ; 4 bit Resistor Tuning
.equ	RTN42	= 6 ; 4 bit Resistor Tuning
.equ	RTN43	= 7 ; 4 bit Resistor Tuning

; FEVCO - Front-End VCO and PLL control
.equ	CPCC0	= 0 ; Charge pump current control
.equ	CPCC1	= 1 ; Charge pump current control
.equ	CPCC2	= 2 ; Charge pump current control
.equ	CPCC3	= 3 ; Charge pump current control
.equ	VCOB0	= 4 ; VCO Bias
.equ	VCOB1	= 5 ; VCO Bias
.equ	VCOB2	= 6 ; VCO Bias
.equ	VCOB3	= 7 ; VCO Bias

; FEVCT - Front-End VCO Tuning Register
.equ	FEVCT0	= 0 ; Front-End VCO Tuning Register Bit 0
.equ	FEVCT1	= 1 ; Front-End VCO Tuning Register Bit 1
.equ	FEVCT2	= 2 ; Front-End VCO Tuning Register Bit 2
.equ	FEVCT3	= 3 ; Front-End VCO Tuning Register Bit 3


; ***** GPIOREGS *****************
; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0 ; General Purpose I/O Register 0 Bit 0
.equ	GPIOR01	= 1 ; General Purpose I/O Register 0 Bit 1
.equ	GPIOR02	= 2 ; General Purpose I/O Register 0 Bit 2
.equ	GPIOR03	= 3 ; General Purpose I/O Register 0 Bit 3
.equ	GPIOR04	= 4 ; General Purpose I/O Register 0 Bit 4
.equ	GPIOR05	= 5 ; General Purpose I/O Register 0 Bit 5
.equ	GPIOR06	= 6 ; General Purpose I/O Register 0 Bit 6
.equ	GPIOR07	= 7 ; General Purpose I/O Register 0 Bit 7

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0 ; General Purpose I/O Register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose I/O Register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose I/O Register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose I/O Register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose I/O Register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose I/O Register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose I/O Register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose I/O Register 1 Bit 7

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0 ; General Purpose I/O Register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose I/O Register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose I/O Register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose I/O Register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose I/O Register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose I/O Register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose I/O Register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose I/O Register 2 Bit 7

; GPIOR3 - General Purpose I/O Register 3
.equ	GPIOR30	= 0 ; General Purpose I/O Register 3 Bit 0
.equ	GPIOR31	= 1 ; General Purpose I/O Register 3 Bit 1
.equ	GPIOR32	= 2 ; General Purpose I/O Register 3 Bit 2
.equ	GPIOR33	= 3 ; General Purpose I/O Register 3 Bit 3
.equ	GPIOR34	= 4 ; General Purpose I/O Register 3 Bit 4
.equ	GPIOR35	= 5 ; General Purpose I/O Register 3 Bit 5
.equ	GPIOR36	= 6 ; General Purpose I/O Register 3 Bit 6
.equ	GPIOR37	= 7 ; General Purpose I/O Register 3 Bit 7

; GPIOR4 - General Purpose I/O Register 4
.equ	GPIOR40	= 0 ; General Purpose I/O Register 4 Bit 0
.equ	GPIOR41	= 1 ; General Purpose I/O Register 4 Bit 1
.equ	GPIOR42	= 2 ; General Purpose I/O Register 4 Bit 2
.equ	GPIOR43	= 3 ; General Purpose I/O Register 4 Bit 3
.equ	GPIOR44	= 4 ; General Purpose I/O Register 4 Bit 4
.equ	GPIOR45	= 5 ; General Purpose I/O Register 4 Bit 5
.equ	GPIOR46	= 6 ; General Purpose I/O Register 4 Bit 6
.equ	GPIOR47	= 7 ; General Purpose I/O Register 4 Bit 7

; GPIOR5 - General Purpose I/O Register 5
.equ	GPIOR50	= 0 ; General Purpose I/O Register 5 Bit 0
.equ	GPIOR51	= 1 ; General Purpose I/O Register 5 Bit 1
.equ	GPIOR52	= 2 ; General Purpose I/O Register 5 Bit 2
.equ	GPIOR53	= 3 ; General Purpose I/O Register 5 Bit 3
.equ	GPIOR54	= 4 ; General Purpose I/O Register 5 Bit 4
.equ	GPIOR55	= 5 ; General Purpose I/O Register 5 Bit 5
.equ	GPIOR56	= 6 ; General Purpose I/O Register 5 Bit 6
.equ	GPIOR57	= 7 ; General Purpose I/O Register 5 Bit 7

; GPIOR6 - General Purpose I/O Register 6
.equ	GPIOR60	= 0 ; General Purpose I/O Register 6 Bit 0
.equ	GPIOR61	= 1 ; General Purpose I/O Register 6 Bit 1
.equ	GPIOR62	= 2 ; General Purpose I/O Register 6 Bit 2
.equ	GPIOR63	= 3 ; General Purpose I/O Register 6 Bit 3
.equ	GPIOR64	= 4 ; General Purpose I/O Register 6 Bit 4
.equ	GPIOR65	= 5 ; General Purpose I/O Register 6 Bit 5
.equ	GPIOR66	= 6 ; General Purpose I/O Register 6 Bit 6
.equ	GPIOR67	= 7 ; General Purpose I/O Register 6 Bit 7


; ***** INT *****************
; EICRA - External Interrupt control Register
.equ	ISC00	= 0 ; Interrupt Sense Control 0
.equ	ISC01	= 1 ; Interrupt Sense Control 0
.equ	ISC10	= 2 ; Interrupt Sense Control 1
.equ	ISC11	= 3 ; Interrupt Sense Control 1

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0
.equ	INTF1	= 1 ; External Interrupt Flag 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 0 Enable
.equ	INT1	= 1 ; External Interrupt Request 1 Enable

; PCICR - Pin change Interrupt control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1 ; Pin Change Interrupt Enable 1

; PCIFR - Pin change Interrupt flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1 ; Pin Change Interrupt Flag 1

; PCMSK0 - Pin change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Mask bit 0
.equ	PCINT1	= 1 ; Pin Change Enable Mask bit 1
.equ	PCINT2	= 2 ; Pin Change Enable Mask bit 2
.equ	PCINT3	= 3 ; Pin Change Enable Mask bit 3
.equ	PCINT4	= 4 ; Pin Change Enable Mask bit 4
.equ	PCINT5	= 5 ; Pin Change Enable Mask bit 5
.equ	PCINT6	= 6 ; Pin Change Enable Mask bit 6
.equ	PCINT7	= 7 ; Pin Change Enable Mask bit 7

; PCMSK1 - Pin change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Mask bit 8
.equ	PCINT9	= 1 ; Pin Change Enable Mask bit 9
.equ	PCINT10	= 2 ; Pin Change Enable Mask bit 10
.equ	PCINT11	= 3 ; Pin Change Enable Mask bit 11
.equ	PCINT12	= 4 ; Pin Change Enable Mask bit 12
.equ	PCINT13	= 5 ; Pin Change Enable Mask bit 13
.equ	PCINT14	= 6 ; Pin Change Enable Mask bit 14
.equ	PCINT15	= 7 ; Pin Change Enable Mask bit 15


; ***** LED *****************
; PDSCR - Pad Driver Strength Control Register
.equ	PDSC0	= 0 ; Pad Driver Strength Control
.equ	PDSC1	= 1 ; Pad Driver Strength Control
.equ	PDSC2	= 2 ; Pad Driver Strength Control
.equ	PDSC3	= 3 ; Pad Driver Strength Control
.equ	PDSC4	= 4 ; Pad Driver Strength Control


; ***** LF3D *****************
; LFCPR - LF Receiver Calibration Protect Register
.equ	LFCALP	= 0 ; LF Calibration Protection
.equ	LFCALRY	= 1 ; LF Calibration Ready
.equ	LFCPCE	= 7 ; LF Calibration Protect Change Enable

; LFCR0 - LF Receiver Decode Unit Control Register 0
.equ	LFCE1	= 0 ; LF Receiver Channel 1 Enable
.equ	LFCE2	= 1 ; LF Receiver Channel 2 Enable
.equ	LFCE3	= 2 ; LF Receiver Channel 3 Enable
.equ	LFBR0	= 3 ; LF Receiver Bit Rate
.equ	LFBR1	= 4 ; LF Receiver Bit Rate
.equ	LFMG	= 5 ; LF Receiver Maximum Gain Select
.equ	LFRRT0	= 6 ; LF Receiver Reset Time select
.equ	LFRRT1	= 7 ; LF Receiver Reset Time select

; LFCR1 - LF Receiver Decode Unit Control Register 1
.equ	LFFM0	= 0 ; LF Function Mode
.equ	LFFM1	= 1 ; LF Function Mode
.equ	ARMDE	= 2 ; Analog Reset Manchester Detector Enable
.equ	FLLEN	= 4 ; FLL Enable
.equ	ADTHEN	= 5 ; Adapt Threshold Enable
.equ	LFPEEN	= 6 ; LF Port Event Enable
.equ	LFRE	= 7 ; LF Receiver Enable

; LFCR2 - LF Receiver Decode Unit Control Register 2
.equ	LFSEN0	= 0 ; LF Sensitivity Mode
.equ	LFSEN1	= 1 ; LF Sensitivity Mode
.equ	LFDAMP	= 2 ; LF coil Damping level select
.equ	LFVC0	= 5 ; LF Velocity Control
.equ	LFVC1	= 6 ; LF Velocity Control
.equ	LFVC2	= 7 ; LF Velocity Control

; LFCR3 - LF Receiver Decode Unit Control Register 3
.equ	LFRCTEN	= 0 ; LF RC Trim Enable
.equ	LFRCPCEN	= 1 ; LF RC Pump Continuous Enable
.equ	LFRCPM	= 2 ; LF RC Pump mode Enable

; LFDSRR - LF Decoder SRC Tuning Register
.equ	SRCDT0	= 0 ; SRC oscillator Decoder Tuning value
.equ	SRCDT1	= 1 ; SRC oscillator Decoder Tuning value
.equ	SRCDT2	= 2 ; SRC oscillator Decoder Tuning value
.equ	SRCDT3	= 3 ; SRC oscillator Decoder Tuning value
.equ	SRCDT4	= 4 ; SRC oscillator Decoder Tuning value
.equ	SRCDT5	= 5 ; SRC oscillator Decoder Tuning value
.equ	SRCDT6	= 6 ; SRC oscillator Decoder Tuning value
.equ	SRCDT7	= 7 ; SRC oscillator Decoder Tuning value

; LFFR - LF Receiver Decode Unit Flag Register
.equ	LFSYDF	= 0 ; LF Synchronization Detect Flag
.equ	LFDEF	= 1 ; LF Decoder Error Flag
.equ	LFEOF	= 2 ; LF End of Telegram Flag
.equ	LFTOF	= 3 ; LF Telegram Time Out Flag
.equ	LFSD	= 6 ; LF Signal Detect
.equ	LFES	= 7 ; LF Envelope Signal

; LFIMR - LF Receiver Decode Unit Interrupt Mask Register
.equ	LFSYDIM	= 0 ; LF Synchronization Detected Interrupt Mask
.equ	LFDEIM	= 1 ; LF Decoder Error Interrupt Mask
.equ	LFEOIM	= 2 ; LF End Of telegram Interrupt Mask

; LFQC1 - LF Receiver Decode Unit Channel 1 Quality Faktor Register
.equ	LFQS10	= 0 ; LF resistor select channel 1
.equ	LFQS11	= 1 ; LF resistor select channel 1
.equ	LFQS12	= 2 ; LF resistor select channel 1
.equ	LFQS13	= 3 ; LF resistor select channel 1
.equ	LFCS10	= 4 ; LF capacitor select channel 1
.equ	LFCS11	= 5 ; LF capacitor select channel 1
.equ	LFCS12	= 6 ; LF capacitor select channel 1
.equ	LFCS13	= 7 ; LF capacitor select channel 1

; LFQC2 - LF Receiver Decode Unit Channel 2 Quality Faktor Register
.equ	LFQS20	= 0 ; LF resistor select channel 2
.equ	LFQS21	= 1 ; LF resistor select channel 2
.equ	LFQS22	= 2 ; LF resistor select channel 2
.equ	LFQS23	= 3 ; LF resistor select channel 2
.equ	LFCS20	= 4 ; LF capacitor select channel 2
.equ	LFCS21	= 5 ; LF capacitor select channel 2
.equ	LFCS22	= 6 ; LF capacitor select channel 2
.equ	LFCS23	= 7 ; LF capacitor select channel 2

; LFQC3 - LF Receiver Decode Unit Channel 3 Quality Faktor Register
.equ	LFQS30	= 0 ; LF resistor select channel 3
.equ	LFQS31	= 1 ; LF resistor select channel 3
.equ	LFQS32	= 2 ; LF resistor select channel 3
.equ	LFQS33	= 3 ; LF resistor select channel 3
.equ	LFCS30	= 4 ; LF capacitor select channel 3
.equ	LFCS31	= 5 ; LF capacitor select channel 3
.equ	LFCS32	= 6 ; LF capacitor select channel 3
.equ	LFCS33	= 7 ; LF capacitor select channel 3

; LFSTOP - LF Receiver Decode Unit Stop Bit Register
.equ	LFSTSY0	= 0 ; LF Stop Bits Symbols
.equ	LFSTSY1	= 1 ; LF Stop Bits Symbols
.equ	LFSTSY2	= 2 ; LF Stop Bits Symbols
.equ	LFSTSY3	= 3 ; LF Stop Bits Symbols
.equ	LFSTL0	= 4 ; LF Stop Bits Length
.equ	LFSTL1	= 5 ; LF Stop Bits Length
.equ	LFSTL2	= 6 ; LF Stop Bits Length

; LFSYLE - LF Receiver Decode Unit Synchronization Length Register
.equ	LFSYLE0	= 0 ; LF Receiver Decode Unit Synchronization Length Register Bit 0
.equ	LFSYLE1	= 1 ; LF Receiver Decode Unit Synchronization Length Register Bit 1
.equ	LFSYLE2	= 2 ; LF Receiver Decode Unit Synchronization Length Register Bit 2
.equ	LFSYLE3	= 3 ; LF Receiver Decode Unit Synchronization Length Register Bit 3
.equ	LFSYLE4	= 4 ; LF Receiver Decode Unit Synchronization Length Register Bit 4
.equ	LFSYLE5	= 5 ; LF Receiver Decode Unit Synchronization Length Register Bit 5

; LFSYSY0 - LF Receiver Decode Unit Synchronization Symbols Register0
.equ	LFSYSY00	= 0 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 0
.equ	LFSYSY01	= 1 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 1
.equ	LFSYSY02	= 2 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 2
.equ	LFSYSY03	= 3 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 3
.equ	LFSYSY04	= 4 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 4
.equ	LFSYSY05	= 5 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 5
.equ	LFSYSY06	= 6 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 6
.equ	LFSYSY07	= 7 ; LF Receiver Decode Unit Synchronization Symbols Register0 Bit 7

; LFSYSY1 - LF Receiver Decode Unit Synchronization Symbols Register1
.equ	LFSYSY10	= 0 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 0
.equ	LFSYSY11	= 1 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 1
.equ	LFSYSY12	= 2 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 2
.equ	LFSYSY13	= 3 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 3
.equ	LFSYSY14	= 4 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 4
.equ	LFSYSY15	= 5 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 5
.equ	LFSYSY16	= 6 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 6
.equ	LFSYSY17	= 7 ; LF Receiver Decode Unit Synchronization Symbols Register1 Bit 7

; LFSYSY2 - LF Receiver Decode Unit Synchronization Symbols Register2
.equ	LFSYSY20	= 0 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 0
.equ	LFSYSY21	= 1 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 1
.equ	LFSYSY22	= 2 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 2
.equ	LFSYSY23	= 3 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 3
.equ	LFSYSY24	= 4 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 4
.equ	LFSYSY25	= 5 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 5
.equ	LFSYSY26	= 6 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 6
.equ	LFSYSY27	= 7 ; LF Receiver Decode Unit Synchronization Symbols Register2 Bit 7

; LFSYSY3 - LF Receiver Decode Unit Synchronization Symbols Register3
.equ	LFSYSY30	= 0 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 0
.equ	LFSYSY31	= 1 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 1
.equ	LFSYSY32	= 2 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 2
.equ	LFSYSY33	= 3 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 3
.equ	LFSYSY34	= 4 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 4
.equ	LFSYSY35	= 5 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 5
.equ	LFSYSY36	= 6 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 6
.equ	LFSYSY37	= 7 ; LF Receiver Decode Unit Synchronization Symbols Register3 Bit 7


; ***** LF_PROTOCOL_HANDLER *****************
; PHBCRR - Protocol Handler Bit Counter Read Register
.equ	PHBCR0	= 0 ; Protocol Handler Bit Counter Read
.equ	PHBCR1	= 1 ; Protocol Handler Bit Counter Read
.equ	PHBCR2	= 2 ; Protocol Handler Bit Counter Read
.equ	PHBCR3	= 3 ; Protocol Handler Bit Counter Read
.equ	PHBCR4	= 4 ; Protocol Handler Bit Counter Read
.equ	PHBCR5	= 5 ; Protocol Handler Bit Counter Read
.equ	PHBCR6	= 6 ; Protocol Handler Bit Counter Read
.equ	PHBCR7	= 7 ; Protocol Handler Bit Counter Read

; PHCKCR - PH FIFO Clock Gen. Control Register
.equ	FIFSCSW	= 0 ; FIFO Synchronous Clock Switch
.equ	FRFIFO	= 5 ; Frame stored in FIFO
.equ	CPM	= 6 ; Continuous Pattern Mode
.equ	CSM	= 7 ; Continue or Single receive Mode

; PHCKSR - PH FIFO Clock Gen. Status Register
.equ	FIFO_SW	= 0 ; FIFO Clock Switch

; PHCRCR - Protocol Handler CRC Control Register
.equ	CRCFR	= 2 ; CRC ID Frame
.equ	CRCMSB	= 3 ; CRC MSB
.equ	CRCSE0	= 4 ; CRC Select
.equ	CRCSE1	= 5 ; CRC Select
.equ	STREN	= 6 ; Strobe Enable
.equ	CRCEN	= 7 ; CRC Enable

; PHCRP - PH CRC Polynomial
.equ	PHCRPH0	= 0 ; PH CRC Polynomial High Bit 8
.equ	PHCRPH1	= 1 ; PH CRC Polynomial High Bit 9
.equ	PHCRPH2	= 2 ; PH CRC Polynomial High Bit 10
.equ	PHCRPH3	= 3 ; PH CRC Polynomial High Bit 11
.equ	PHCRPH4	= 4 ; PH CRC Polynomial High Bit 12
.equ	PHCRPH5	= 5 ; PH CRC Polynomial High Bit 13
.equ	PHCRPH6	= 6 ; PH CRC Polynomial High Bit 14
.equ	PHCRPH7	= 7 ; PH CRC Polynomial High Bit 15

.equ	PHCRPL0	= 0 ; PH CRC Polynomial Low Bit 0
.equ	PHCRPL1	= 1 ; PH CRC Polynomial Low Bit 1
.equ	PHCRPL2	= 2 ; PH CRC Polynomial Low Bit 2
.equ	PHCRPL3	= 3 ; PH CRC Polynomial Low Bit 3
.equ	PHCRPL4	= 4 ; PH CRC Polynomial Low Bit 4
.equ	PHCRPL5	= 5 ; PH CRC Polynomial Low Bit 5
.equ	PHCRPL6	= 6 ; PH CRC Polynomial Low Bit 6
.equ	PHCRPL7	= 7 ; PH CRC Polynomial Low Bit 7

; PHCSR - PH CRC Checksum
.equ	PHCSRH0	= 0 ; PH CRC Checksum High Bit 8
.equ	PHCSRH1	= 1 ; PH CRC Checksum High Bit 9
.equ	PHCSRH2	= 2 ; PH CRC Checksum High Bit 10
.equ	PHCSRH3	= 3 ; PH CRC Checksum High Bit 11
.equ	PHCSRH4	= 4 ; PH CRC Checksum High Bit 12
.equ	PHCSRH5	= 5 ; PH CRC Checksum High Bit 13
.equ	PHCSRH6	= 6 ; PH CRC Checksum High Bit 14
.equ	PHCSRH7	= 7 ; PH CRC Checksum High Bit 15

.equ	PHCSRL0	= 0 ; PH CRC Checksum Low Bit 0
.equ	PHCSRL1	= 1 ; PH CRC Checksum Low Bit 1
.equ	PHCSRL2	= 2 ; PH CRC Checksum Low Bit 2
.equ	PHCSRL3	= 3 ; PH CRC Checksum Low Bit 3
.equ	PHCSRL4	= 4 ; PH CRC Checksum Low Bit 4
.equ	PHCSRL5	= 5 ; PH CRC Checksum Low Bit 5
.equ	PHCSRL6	= 6 ; PH CRC Checksum Low Bit 6
.equ	PHCSRL7	= 7 ; PH CRC Checksum Low Bit 7

; PHCST - PH CRC Start Value
.equ	PHCSTH0	= 0 ; PH CRC Start Value High Bit 8
.equ	PHCSTH1	= 1 ; PH CRC Start Value High Bit 9
.equ	PHCSTH2	= 2 ; PH CRC Start Value High Bit 10
.equ	PHCSTH3	= 3 ; PH CRC Start Value High Bit 11
.equ	PHCSTH4	= 4 ; PH CRC Start Value High Bit 12
.equ	PHCSTH5	= 5 ; PH CRC Start Value High Bit 13
.equ	PHCSTH6	= 6 ; PH CRC Start Value High Bit 14
.equ	PHCSTH7	= 7 ; PH CRC Start Value High Bit 15

.equ	PHCSTL0	= 0 ; PH CRC Start Value Low Bit 0
.equ	PHCSTL1	= 1 ; PH CRC Start Value Low Bit 1
.equ	PHCSTL2	= 2 ; PH CRC Start Value Low Bit 2
.equ	PHCSTL3	= 3 ; PH CRC Start Value Low Bit 3
.equ	PHCSTL4	= 4 ; PH CRC Start Value Low Bit 4
.equ	PHCSTL5	= 5 ; PH CRC Start Value Low Bit 5
.equ	PHCSTL6	= 6 ; PH CRC Start Value Low Bit 6
.equ	PHCSTL7	= 7 ; PH CRC Start Value Low Bit 7

; PHDFR - Protocol Handler Data Frame end Register
.equ	PHDF0	= 0 ; Protocol Handler Data Frame end
.equ	PHDF1	= 1 ; Protocol Handler Data Frame end
.equ	PHDF2	= 2 ; Protocol Handler Data Frame end
.equ	PHDF3	= 3 ; Protocol Handler Data Frame end
.equ	PHDF4	= 4 ; Protocol Handler Data Frame end
.equ	PHDF5	= 5 ; Protocol Handler Data Frame end
.equ	PHDF6	= 6 ; Protocol Handler Data Frame end
.equ	PHDF7	= 7 ; Protocol Handler Data Frame end

; PHFC - PH FIFO Configuration Register
.equ	FLC0	= 0 ; PH FIFO Fill-Level Configuration
.equ	FLC1	= 1 ; PH FIFO Fill-Level Configuration
.equ	FLC2	= 2 ; PH FIFO Fill-Level Configuration
.equ	FLC3	= 3 ; PH FIFO Fill-Level Configuration
.equ	FLC4	= 4 ; PH FIFO Fill-Level Configuration
.equ	FLC5	= 5 ; PH FIFO Fill-Level Configuration
.equ	FFMSB	= 6 ; PH FIFO MSB alignment bit
.equ	DRA	= 7 ; PH FIFO Direct Read Access Operational Mode

; PHFD - PH FIFO Data Register
.equ	PHFD0	= 0 ; PH FIFO Data Register Bit 0
.equ	PHFD1	= 1 ; PH FIFO Data Register Bit 1
.equ	PHFD2	= 2 ; PH FIFO Data Register Bit 2
.equ	PHFD3	= 3 ; PH FIFO Data Register Bit 3
.equ	PHFD4	= 4 ; PH FIFO Data Register Bit 4
.equ	PHFD5	= 5 ; PH FIFO Data Register Bit 5
.equ	PHFD6	= 6 ; PH FIFO Data Register Bit 6
.equ	PHFD7	= 7 ; PH FIFO Data Register Bit 7

; PHFI - PH FIFO Interrupt Mask Register
.equ	FLIM	= 0 ; PH FIFO Fill-level Interrupt Mask
.equ	ERIM	= 1 ; PH FIFO Error Interrupt Mask

; PHFL - PH FIFO Fill Level Register
.equ	FLS0	= 0 ; PH FIFO Fill Level Status
.equ	FLS1	= 1 ; PH FIFO Fill Level Status
.equ	FLS2	= 2 ; PH FIFO Fill Level Status
.equ	FLS3	= 3 ; PH FIFO Fill Level Status
.equ	FLS4	= 4 ; PH FIFO Fill Level Status
.equ	FLS5	= 5 ; PH FIFO Fill Level Status
.equ	PHCLR	= 7 ; PH FIFO Clear

; PHFR - Protocol Handler Flag Register
.equ	CRCEF	= 0 ; PH CRC Error Status Flag
.equ	PHTBLF	= 1 ; Protocol Handler Telegram Bit Length Flag
.equ	PHDFF	= 2 ; Protocol Handler Date Frame Flag
.equ	PHIDFF	= 3 ; Protocol Handler ID Frame Flag
.equ	PHID0F	= 4 ; Protocol Handler IDentifier 0 Flag
.equ	PHID1F	= 5 ; Protocol Handler IDentifier 1 Flag

; PHFRP - PH FIFO Read Pointer
.equ	FRP0	= 0 ; PH FIFO Read Pointer
.equ	FRP1	= 1 ; PH FIFO Read Pointer
.equ	FRP2	= 2 ; PH FIFO Read Pointer
.equ	FRP3	= 3 ; PH FIFO Read Pointer
.equ	FRP4	= 4 ; PH FIFO Read Pointer
.equ	FRP5	= 5 ; PH FIFO Read Pointer

; PHFS - Protocol Handler FIFO Status Register
.equ	FLRF	= 0 ; PH FIFO Fill-Level Reached Status Flag
.equ	FUFL	= 1 ; PH FIFO Underflow Flag
.equ	FOFL	= 2 ; PH FIFO Overflow Flag

; PHFWP - PH FIFO Write Pointer
.equ	FWP0	= 0 ; PH FIFO Write Pointer
.equ	FWP1	= 1 ; PH FIFO Write Pointer
.equ	FWP2	= 2 ; PH FIFO Write Pointer
.equ	FWP3	= 3 ; PH FIFO Write Pointer
.equ	FWP4	= 4 ; PH FIFO Write Pointer
.equ	FWP5	= 5 ; PH FIFO Write Pointer

; PHID00 - PH ID0[7:0] Register
.equ	ID000	= 0 ; PH ID0[7:0]
.equ	ID001	= 1 ; PH ID0[7:0]
.equ	ID002	= 2 ; PH ID0[7:0]
.equ	ID003	= 3 ; PH ID0[7:0]
.equ	ID004	= 4 ; PH ID0[7:0]
.equ	ID005	= 5 ; PH ID0[7:0]
.equ	ID006	= 6 ; PH ID0[7:0]
.equ	ID007	= 7 ; PH ID0[7:0]

; PHID01 - PH ID0[15:8] Register
.equ	ID010	= 0 ; PH ID0[15:8]
.equ	ID011	= 1 ; PH ID0[15:8]
.equ	ID012	= 2 ; PH ID0[15:8]
.equ	ID013	= 3 ; PH ID0[15:8]
.equ	ID014	= 4 ; PH ID0[15:8]
.equ	ID015	= 5 ; PH ID0[15:8]
.equ	ID016	= 6 ; PH ID0[15:8]
.equ	ID017	= 7 ; PH ID0[15:8]

; PHID02 - PH ID0[23:16] Register
.equ	ID020	= 0 ; PH ID0[23:16]
.equ	ID021	= 1 ; PH ID0[23:16]
.equ	ID022	= 2 ; PH ID0[23:16]
.equ	ID023	= 3 ; PH ID0[23:16]
.equ	ID024	= 4 ; PH ID0[23:16]
.equ	ID025	= 5 ; PH ID0[23:16]
.equ	ID026	= 6 ; PH ID0[23:16]
.equ	ID027	= 7 ; PH ID0[23:16]

; PHID03 - PH ID0[31:24] Register
.equ	ID030	= 0 ; PH ID0[31:24]
.equ	ID031	= 1 ; PH ID0[31:24]
.equ	ID032	= 2 ; PH ID0[31:24]
.equ	ID033	= 3 ; PH ID0[31:24]
.equ	ID034	= 4 ; PH ID0[31:24]
.equ	ID035	= 5 ; PH ID0[31:24]
.equ	ID036	= 6 ; PH ID0[31:24]
.equ	ID037	= 7 ; PH ID0[31:24]

; PHID0L - PH Identifier 0 Length Register
.equ	ID0FS0	= 0 ; Identifier 0 Frame Select
.equ	ID0FS1	= 1 ; Identifier 0 Frame Select
.equ	ID0FS2	= 2 ; Identifier 0 Frame Select
.equ	ID0FS3	= 3 ; Identifier 0 Frame Select
.equ	ID0FS4	= 4 ; Identifier 0 Frame Select
.equ	ID0FS5	= 5 ; Identifier 0 Frame Select

; PHID10 - PH ID1[7:0] Register
.equ	ID100	= 0 ; PH ID1[7:0]
.equ	ID101	= 1 ; PH ID1[7:0]
.equ	ID102	= 2 ; PH ID1[7:0]
.equ	ID103	= 3 ; PH ID1[7:0]
.equ	ID104	= 4 ; PH ID1[7:0]
.equ	ID105	= 5 ; PH ID1[7:0]
.equ	ID106	= 6 ; PH ID1[7:0]
.equ	ID107	= 7 ; PH ID1[7:0]

; PHID11 - PH ID1[15:8] Register
.equ	ID110	= 0 ; PH ID1[15:8]
.equ	ID111	= 1 ; PH ID1[15:8]
.equ	ID112	= 2 ; PH ID1[15:8]
.equ	ID113	= 3 ; PH ID1[15:8]
.equ	ID114	= 4 ; PH ID1[15:8]
.equ	ID115	= 5 ; PH ID1[15:8]
.equ	ID116	= 6 ; PH ID1[15:8]
.equ	ID117	= 7 ; PH ID1[15:8]

; PHID12 - PH ID1[23:16] Register
.equ	ID120	= 0 ; PH ID1[23:16]
.equ	ID121	= 1 ; PH ID1[23:16]
.equ	ID122	= 2 ; PH ID1[23:16]
.equ	ID123	= 3 ; PH ID1[23:16]
.equ	ID124	= 4 ; PH ID1[23:16]
.equ	ID125	= 5 ; PH ID1[23:16]
.equ	ID126	= 6 ; PH ID1[23:16]
.equ	ID127	= 7 ; PH ID1[23:16]

; PHID13 - PH ID1[31:24] Register
.equ	ID130	= 0 ; PH ID1[31:24]
.equ	ID131	= 1 ; PH ID1[31:24]
.equ	ID132	= 2 ; PH ID1[31:24]
.equ	ID133	= 3 ; PH ID1[31:24]
.equ	ID134	= 4 ; PH ID1[31:24]
.equ	ID135	= 5 ; PH ID1[31:24]
.equ	ID136	= 6 ; PH ID1[31:24]
.equ	ID137	= 7 ; PH ID1[31:24]

; PHID1L - PH Identifier 1 Length Register
.equ	ID1FS0	= 0 ; Identifier 1 Frame Select
.equ	ID1FS1	= 1 ; Identifier 1 Frame Select
.equ	ID1FS2	= 2 ; Identifier 1 Frame Select
.equ	ID1FS3	= 3 ; Identifier 1 Frame Select
.equ	ID1FS4	= 4 ; Identifier 1 Frame Select
.equ	ID1FS5	= 5 ; Identifier 1 Frame Select

; PHIDFR - Protocol Handler ID Frame Register
.equ	RDFS0	= 0 ; ID Frame Select
.equ	RDFS1	= 1 ; ID Frame Select
.equ	RDFS2	= 2 ; ID Frame Select
.equ	RDFS3	= 3 ; ID Frame Select
.equ	RDFS4	= 4 ; ID Frame Select
.equ	RDFS5	= 5 ; ID Frame Select
.equ	RDFS6	= 6 ; ID Frame Select
.equ	RDFS7	= 7 ; ID Frame Select

; PHIMR - Protocol Handler Interrupt Mask Register
.equ	PHTBLIM	= 1 ; Protocol Handler Telegram Bit Length Interrupt Mask
.equ	PHDFIM	= 2 ; Protocol Handler Date Frame Interrupt Mask
.equ	PHIDFIM	= 3 ; Protocol Handler ID Frame Interrupt Mask
.equ	PHID0IM	= 4 ; Protocol Handler IDentifier 0 Interrupt Mask
.equ	PHID1IM	= 5 ; Protocol Handler IDentifier 1 Interrupt Mask

; PHTBLR - Protocol Handler Telegram Bit Length Register
.equ	PHTBL0	= 0 ; Protocol Handler Telegram Bit Length
.equ	PHTBL1	= 1 ; Protocol Handler Telegram Bit Length
.equ	PHTBL2	= 2 ; Protocol Handler Telegram Bit Length
.equ	PHTBL3	= 3 ; Protocol Handler Telegram Bit Length
.equ	PHTBL4	= 4 ; Protocol Handler Telegram Bit Length
.equ	PHTBL5	= 5 ; Protocol Handler Telegram Bit Length
.equ	PHTBL6	= 6 ; Protocol Handler Telegram Bit Length
.equ	PHTBL7	= 7 ; Protocol Handler Telegram Bit Length

; PHTCMR - Protocol Handler Timer Control Mode Register
.equ	PHPS0	= 0 ; PH timer Prescaler Select
.equ	PHPS1	= 1 ; PH timer Prescaler Select
.equ	PHPS2	= 2 ; PH timer Prescaler Select
.equ	PHCRM	= 3 ; PH timer Compare Reset Mask
.equ	PHCIM	= 4 ; PH timer Compare Interrupt Mask
.equ	PHRES	= 5 ; PH timer Reset
.equ	PHSM	= 6 ; PH timer Start Mode
.equ	PHTE	= 7 ; PH timer Enable

; PHTCOR - Protocol Handler Timer Compare Register
.equ	PHTCOR0	= 0 ; Protocol Handler Timer Compare Register Bit 0
.equ	PHTCOR1	= 1 ; Protocol Handler Timer Compare Register Bit 1
.equ	PHTCOR2	= 2 ; Protocol Handler Timer Compare Register Bit 2
.equ	PHTCOR3	= 3 ; Protocol Handler Timer Compare Register Bit 3
.equ	PHTCOR4	= 4 ; Protocol Handler Timer Compare Register Bit 4
.equ	PHTCOR5	= 5 ; Protocol Handler Timer Compare Register Bit 5
.equ	PHTCOR6	= 6 ; Protocol Handler Timer Compare Register Bit 6
.equ	PHTCOR7	= 7 ; Protocol Handler Timer Compare Register Bit 7

; PHTEMR - Protocol Handler Timer Event Mask Register
.equ	ID0EM	= 0 ; ID0 Event Mask
.equ	ID1EM	= 1 ; ID1 Event Mask
.equ	IDFEM	= 2 ; Identifier Frame Event Mask
.equ	DFEM	= 3 ; Data Frame end reached Event Mask
.equ	TBLEM	= 4 ; Telegram Bit Length reached Event Mask
.equ	FLEM	= 5 ; Fill Level reached Event Mask
.equ	EOFEM	= 6 ; End Of telegram Event Mask
.equ	PHCOF	= 7 ; PH timer Compare Flag


; ***** LF_RSSI *****************
; LFRSC1 - LF RSSI Value Channel 1
.equ	LFRSC1H0	= 0 ; LF RSSI Value Channel 1 High Bit 8
.equ	LFRSC1H1	= 1 ; LF RSSI Value Channel 1 High Bit 9
.equ	LFRSC1H2	= 2 ; LF RSSI Value Channel 1 High Bit 10
.equ	LFRSC1H3	= 3 ; LF RSSI Value Channel 1 High Bit 11
.equ	LFRSC1H4	= 4 ; LF RSSI Value Channel 1 High Bit 12
.equ	LFRSC1H5	= 5 ; LF RSSI Value Channel 1 High Bit 13
.equ	LFRSC1H6	= 6 ; LF RSSI Value Channel 1 High Bit 14
.equ	LFRSC1H7	= 7 ; LF RSSI Value Channel 1 High Bit 15

.equ	LFRSC1L0	= 0 ; LF RSSI Value Channel 1 Low Bit 0
.equ	LFRSC1L1	= 1 ; LF RSSI Value Channel 1 Low Bit 1
.equ	LFRSC1L2	= 2 ; LF RSSI Value Channel 1 Low Bit 2
.equ	LFRSC1L3	= 3 ; LF RSSI Value Channel 1 Low Bit 3
.equ	LFRSC1L4	= 4 ; LF RSSI Value Channel 1 Low Bit 4
.equ	LFRSC1L5	= 5 ; LF RSSI Value Channel 1 Low Bit 5
.equ	LFRSC1L6	= 6 ; LF RSSI Value Channel 1 Low Bit 6
.equ	LFRSC1L7	= 7 ; LF RSSI Value Channel 1 Low Bit 7

; LFRSC2 - LF RSSI Value Channel 2
.equ	LFRSC2H0	= 0 ; LF RSSI Value Channel 2 High Bit 8
.equ	LFRSC2H1	= 1 ; LF RSSI Value Channel 2 High Bit 9
.equ	LFRSC2H2	= 2 ; LF RSSI Value Channel 2 High Bit 10
.equ	LFRSC2H3	= 3 ; LF RSSI Value Channel 2 High Bit 11
.equ	LFRSC2H4	= 4 ; LF RSSI Value Channel 2 High Bit 12
.equ	LFRSC2H5	= 5 ; LF RSSI Value Channel 2 High Bit 13
.equ	LFRSC2H6	= 6 ; LF RSSI Value Channel 2 High Bit 14
.equ	LFRSC2H7	= 7 ; LF RSSI Value Channel 2 High Bit 15

.equ	LFRSC2L0	= 0 ; LF RSSI Value Channel 2 Low Bit 0
.equ	LFRSC2L1	= 1 ; LF RSSI Value Channel 2 Low Bit 1
.equ	LFRSC2L2	= 2 ; LF RSSI Value Channel 2 Low Bit 2
.equ	LFRSC2L3	= 3 ; LF RSSI Value Channel 2 Low Bit 3
.equ	LFRSC2L4	= 4 ; LF RSSI Value Channel 2 Low Bit 4
.equ	LFRSC2L5	= 5 ; LF RSSI Value Channel 2 Low Bit 5
.equ	LFRSC2L6	= 6 ; LF RSSI Value Channel 2 Low Bit 6
.equ	LFRSC2L7	= 7 ; LF RSSI Value Channel 2 Low Bit 7

; LFRSC3 - LF RSSI Value Channel 3
.equ	LFRSC3H0	= 0 ; LF RSSI Value Channel 3 High Bit 8
.equ	LFRSC3H1	= 1 ; LF RSSI Value Channel 3 High Bit 9
.equ	LFRSC3H2	= 2 ; LF RSSI Value Channel 3 High Bit 10
.equ	LFRSC3H3	= 3 ; LF RSSI Value Channel 3 High Bit 11
.equ	LFRSC3H4	= 4 ; LF RSSI Value Channel 3 High Bit 12
.equ	LFRSC3H5	= 5 ; LF RSSI Value Channel 3 High Bit 13
.equ	LFRSC3H6	= 6 ; LF RSSI Value Channel 3 High Bit 14
.equ	LFRSC3H7	= 7 ; LF RSSI Value Channel 3 High Bit 15

.equ	LFRSC3L0	= 0 ; LF RSSI Value Channel 3 Low Bit 0
.equ	LFRSC3L1	= 1 ; LF RSSI Value Channel 3 Low Bit 1
.equ	LFRSC3L2	= 2 ; LF RSSI Value Channel 3 Low Bit 2
.equ	LFRSC3L3	= 3 ; LF RSSI Value Channel 3 Low Bit 3
.equ	LFRSC3L4	= 4 ; LF RSSI Value Channel 3 Low Bit 4
.equ	LFRSC3L5	= 5 ; LF RSSI Value Channel 3 Low Bit 5
.equ	LFRSC3L6	= 6 ; LF RSSI Value Channel 3 Low Bit 6
.equ	LFRSC3L7	= 7 ; LF RSSI Value Channel 3 Low Bit 7

; LFRSCR - LF RSSI Control Register
.equ	LFRSA0	= 0 ; LF RSSI Average Number
.equ	LFRSA1	= 1 ; LF RSSI Average Number
.equ	LFRSA2	= 2 ; LF RSSI Average Number
.equ	LFRSMS	= 3 ; LF RSSI Measurement Start
.equ	LFRSIM	= 4 ; LF RSSI Interrupt Mask
.equ	LFRSRS	= 5 ; LF RSSI Reset Select

; LFRSFR - LF RSSI FLAG Register
.equ	LFRSMF	= 0 ; LF RSSI Measure Flag
.equ	LFRSTO1	= 1 ; LF RSSI Time Out channel 1
.equ	LFRSTO2	= 2 ; LF RSSI Time Out channel 2
.equ	LFRSTO3	= 3 ; LF RSSI Time Out channel 3

; LFRSMR - LF RSSI Mode Register
.equ	LFRSM0	= 0 ; LF RSSI Mode
.equ	LFRSM1	= 1 ; LF RSSI Mode
.equ	LFRSM2	= 2 ; LF RSSI Mode
.equ	LFRSM3	= 3 ; LF RSSI Mode
.equ	LFRSCM	= 4 ; LF RSSI Current Mode select
.equ	LFRSFD	= 5 ; LF RSSI Full average Data select
.equ	LFRSD0	= 6 ; LF RSSI T2 delay select
.equ	LFRSD1	= 7 ; LF RSSI T2 delay select


; ***** MEM *****************
; EEST - EEPROM Status Register
.equ	EESYN0	= 0 ; EEPROM Syndrome
.equ	EESYN1	= 1 ; EEPROM Syndrome
.equ	EESYN2	= 2 ; EEPROM Syndrome
.equ	EESYN3	= 3 ; EEPROM Syndrome


; ***** PORTB *****************
; PORTB - Port B Data Register
.equ	PORTB0	= 0 ; Port B Data Register Bit 0
.equ	PORTB1	= 1 ; Port B Data Register Bit 1
.equ	PORTB2	= 2 ; Port B Data Register Bit 2
.equ	PORTB3	= 3 ; Port B Data Register Bit 3
.equ	PORTB4	= 4 ; Port B Data Register Bit 4
.equ	PORTB5	= 5 ; Port B Data Register Bit 5
.equ	PORTB6	= 6 ; Port B Data Register Bit 6
.equ	PORTB7	= 7 ; Port B Data Register Bit 7

; DDRB - Port B Data Direction Register
.equ	DDRB0	= 0 ; Port B Data Direction Register Bit 0
.equ	DDRB1	= 1 ; Port B Data Direction Register Bit 1
.equ	DDRB2	= 2 ; Port B Data Direction Register Bit 2
.equ	DDRB3	= 3 ; Port B Data Direction Register Bit 3
.equ	DDRB4	= 4 ; Port B Data Direction Register Bit 4
.equ	DDRB5	= 5 ; Port B Data Direction Register Bit 5
.equ	DDRB6	= 6 ; Port B Data Direction Register Bit 6
.equ	DDRB7	= 7 ; Port B Data Direction Register Bit 7

; PINB - Port B Input Pins
.equ	PINB0	= 0 ; Port B Input Pins Bit 0
.equ	PINB1	= 1 ; Port B Input Pins Bit 1
.equ	PINB2	= 2 ; Port B Input Pins Bit 2
.equ	PINB3	= 3 ; Port B Input Pins Bit 3
.equ	PINB4	= 4 ; Port B Input Pins Bit 4
.equ	PINB5	= 5 ; Port B Input Pins Bit 5
.equ	PINB6	= 6 ; Port B Input Pins Bit 6
.equ	PINB7	= 7 ; Port B Input Pins Bit 7


; ***** PORTC *****************
; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2

; DDRC - Port C Data Direction Register
.equ	DDRC0	= 0 ; Port C Data Direction Register Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Register Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Register Bit 2

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2


; ***** PORTD *****************
; PORTD - Port D Data Register
.equ	PORTD0	= 0 ; Port D Data Register Bit 0
.equ	PORTD1	= 1 ; Port D Data Register Bit 1
.equ	PORTD2	= 2 ; Port D Data Register Bit 2
.equ	PORTD3	= 3 ; Port D Data Register Bit 3
.equ	PORTD4	= 4 ; Port D Data Register Bit 4
.equ	PORTD5	= 5 ; Port D Data Register Bit 5
.equ	PORTD6	= 6 ; Port D Data Register Bit 6
.equ	PORTD7	= 7 ; Port D Data Register Bit 7

; DDRD - Port D Data Direction Register
.equ	DDRD0	= 0 ; Port D Data Direction Register Bit 0
.equ	DDRD1	= 1 ; Port D Data Direction Register Bit 1
.equ	DDRD2	= 2 ; Port D Data Direction Register Bit 2
.equ	DDRD3	= 3 ; Port D Data Direction Register Bit 3
.equ	DDRD4	= 4 ; Port D Data Direction Register Bit 4
.equ	DDRD5	= 5 ; Port D Data Direction Register Bit 5
.equ	DDRD6	= 6 ; Port D Data Direction Register Bit 6
.equ	DDRD7	= 7 ; Port D Data Direction Register Bit 7

; PIND - Port D Input Pins
.equ	PIND0	= 0 ; Port D Input Pins Bit 0
.equ	PIND1	= 1 ; Port D Input Pins Bit 1
.equ	PIND2	= 2 ; Port D Input Pins Bit 2
.equ	PIND3	= 3 ; Port D Input Pins Bit 3
.equ	PIND4	= 4 ; Port D Input Pins Bit 4
.equ	PIND5	= 5 ; Port D Input Pins Bit 5
.equ	PIND6	= 6 ; Port D Input Pins Bit 6
.equ	PIND7	= 7 ; Port D Input Pins Bit 7


; ***** SFIFO *****************
; SFC - Support FIFO Configuration Register
.equ	SFFLC0	= 0 ; Support FIFO Fill-Level Configuration
.equ	SFFLC1	= 1 ; Support FIFO Fill-Level Configuration
.equ	SFFLC2	= 2 ; Support FIFO Fill-Level Configuration
.equ	SFFLC3	= 3 ; Support FIFO Fill-Level Configuration
.equ	SFFLC4	= 4 ; Support FIFO Fill-Level Configuration
.equ	SFDRA	= 7 ; Support FIFO Direct Read Access Operational Mode

; SFD - Support FIFO Data Register
.equ	SFD0	= 0 ; Support FIFO Data Register Bit 0
.equ	SFD1	= 1 ; Support FIFO Data Register Bit 1
.equ	SFD2	= 2 ; Support FIFO Data Register Bit 2
.equ	SFD3	= 3 ; Support FIFO Data Register Bit 3
.equ	SFD4	= 4 ; Support FIFO Data Register Bit 4
.equ	SFD5	= 5 ; Support FIFO Data Register Bit 5
.equ	SFD6	= 6 ; Support FIFO Data Register Bit 6
.equ	SFD7	= 7 ; Support FIFO Data Register Bit 7

; SFI - Support FIFO Interrupt Mask Register
.equ	SFFLIM	= 0 ; Support FIFO Fill-level Interrupt Mask
.equ	SFERIM	= 1 ; Support FIFO Error Interrupt Mask

; SFL - Support FIFO Fill Level Register
.equ	SFFLS0	= 0 ; Support FIFO Fill Level Status
.equ	SFFLS1	= 1 ; Support FIFO Fill Level Status
.equ	SFFLS2	= 2 ; Support FIFO Fill Level Status
.equ	SFFLS3	= 3 ; Support FIFO Fill Level Status
.equ	SFFLS4	= 4 ; Support FIFO Fill Level Status
.equ	SFCLR	= 7 ; Support FIFO Clear

; SFRP - Support FIFO Read Pointer
.equ	SFRP0	= 0 ; Support FIFO Read Pointer Bit 0
.equ	SFRP1	= 1 ; Support FIFO Read Pointer Bit 1
.equ	SFRP2	= 2 ; Support FIFO Read Pointer Bit 2
.equ	SFRP3	= 3 ; Support FIFO Read Pointer Bit 3
.equ	SFRP4	= 4 ; Support FIFO Read Pointer Bit 4

; SFS - Support FIFO Status Register
.equ	SFFLRF	= 0 ; Support FIFO Fill-Level Reached Status Flag
.equ	SFUFL	= 1 ; Support FIFO Underflow Flag
.equ	SFOFL	= 2 ; Support FIFO Overflow Flag

; SFWP - Support FIFO Write Pointer
.equ	SFWP0	= 0 ; Support FIFO Write Pointer Bit 0
.equ	SFWP1	= 1 ; Support FIFO Write Pointer Bit 1
.equ	SFWP2	= 2 ; Support FIFO Write Pointer Bit 2
.equ	SFWP3	= 3 ; Support FIFO Write Pointer Bit 3
.equ	SFWP4	= 4 ; Support FIFO Write Pointer Bit 4


; ***** SPI *****************
; SFFR - SPI FIFO Fill Status Register
.equ	RFL0	= 0 ; Receive Buffer Fill Level
.equ	RFL1	= 1 ; Receive Buffer Fill Level
.equ	RFL2	= 2 ; Receive Buffer Fill Level
.equ	RFC	= 3 ; Rx Buffer Clear
.equ	TFL0	= 4 ; Transmit Buffer Fill Level
.equ	TFL1	= 5 ; Transmit Buffer Fill Level
.equ	TFL2	= 6 ; Transmit Buffer Fill Level
.equ	TFC	= 7 ; SPI Tx Buffer Clear

; SFIR - SPI FIFO Interrupt Register
.equ	RIL0	= 0 ; Receive Buffer Interrupt Level
.equ	RIL1	= 1 ; Receive Buffer Interrupt Level
.equ	RIL2	= 2 ; Receive Buffer Interrupt Level
.equ	SRIE	= 3 ; Rx Buffer Interrupt Enable
.equ	TIL0	= 4 ; Transmit Buffer Interrupt Level
.equ	TIL1	= 5 ; Transmit Buffer Interrupt Level
.equ	TIL2	= 6 ; Transmit Buffer Interrupt Level
.equ	STIE	= 7 ; SPI Rx Buffer Interrupt Enable

; SPCR - SPI control Register
.equ	SPR0	= 0 ; SPI Clock Rate Select
.equ	SPR1	= 1 ; SPI Clock Rate Select
.equ	CPHA	= 2 ; Clock Phase
.equ	CPOL	= 3 ; Clock Polarity
.equ	MSTR	= 4 ; Master/Slave Select
.equ	DORD	= 5 ; Data Order
.equ	SPE	= 6 ; SPI Enable
.equ	SPIE	= 7 ; Spe Interrupt Enable

; SPDR - SPI Data Register
.equ	SPDR0	= 0 ; SPI Data Register Bit 0
.equ	SPDR1	= 1 ; SPI Data Register Bit 1
.equ	SPDR2	= 2 ; SPI Data Register Bit 2
.equ	SPDR3	= 3 ; SPI Data Register Bit 3
.equ	SPDR4	= 4 ; SPI Data Register Bit 4
.equ	SPDR5	= 5 ; SPI Data Register Bit 5
.equ	SPDR6	= 6 ; SPI Data Register Bit 6
.equ	SPDR7	= 7 ; SPI Data Register Bit 7

; SPSR - SPI Status Register
.equ	SPI2X	= 0 ; Double SPI Speed Bit
.equ	RXIF	= 4 ; Rx Buffer Interrupt Flag
.equ	TXIF	= 5 ; Tx Buffer Interrupt Flag
.equ	SPIF	= 7 ; SPI Interrupt Flag


; ***** SSM *****************
; MSMCR1 - Master State Machine Control Register 1
.equ	MSMSM00	= 0 ; Master State Machine SubState Machine Select 0
.equ	MSMSM01	= 1 ; Master State Machine SubState Machine Select 0
.equ	MSMSM02	= 2 ; Master State Machine SubState Machine Select 0
.equ	MSMSM03	= 3 ; Master State Machine SubState Machine Select 0
.equ	MSMSM10	= 4 ; Master State Machine SubState Machine Select 1
.equ	MSMSM11	= 5 ; Master State Machine SubState Machine Select 1
.equ	MSMSM12	= 6 ; Master State Machine SubState Machine Select 1
.equ	MSMSM13	= 7 ; Master State Machine SubState Machine Select 1

; MSMCR2 - Master State Machine Control Register 2
.equ	MSMSM20	= 0 ; Master State Machine SubState Machine Select 2
.equ	MSMSM21	= 1 ; Master State Machine SubState Machine Select 2
.equ	MSMSM22	= 2 ; Master State Machine SubState Machine Select 2
.equ	MSMSM23	= 3 ; Master State Machine SubState Machine Select 2
.equ	MSMSM30	= 4 ; Master State Machine SubState Machine Select 3
.equ	MSMSM31	= 5 ; Master State Machine SubState Machine Select 3
.equ	MSMSM32	= 6 ; Master State Machine SubState Machine Select 3
.equ	MSMSM33	= 7 ; Master State Machine SubState Machine Select 3

; MSMCR3 - Master State Machine Control Register 3
.equ	MSMSM40	= 0 ; Master State Machine SubState Machine Select 4
.equ	MSMSM41	= 1 ; Master State Machine SubState Machine Select 4
.equ	MSMSM42	= 2 ; Master State Machine SubState Machine Select 4
.equ	MSMSM43	= 3 ; Master State Machine SubState Machine Select 4
.equ	MSMSM50	= 4 ; Master State Machine SubState Machine Select 5
.equ	MSMSM51	= 5 ; Master State Machine SubState Machine Select 5
.equ	MSMSM52	= 6 ; Master State Machine SubState Machine Select 5
.equ	MSMSM53	= 7 ; Master State Machine SubState Machine Select 5

; MSMCR4 - Master State Machine Control Register 4
.equ	MSMSM60	= 0 ; Master State Machine SubState Machine Select 6
.equ	MSMSM61	= 1 ; Master State Machine SubState Machine Select 6
.equ	MSMSM62	= 2 ; Master State Machine SubState Machine Select 6
.equ	MSMSM63	= 3 ; Master State Machine SubState Machine Select 6
.equ	MSMSM70	= 4 ; Master State Machine SubState Machine Select 7
.equ	MSMSM71	= 5 ; Master State Machine SubState Machine Select 7
.equ	MSMSM72	= 6 ; Master State Machine SubState Machine Select 7
.equ	MSMSM73	= 7 ; Master State Machine SubState Machine Select 7

; MSMSTR - Master State Machine state register
.equ	SSMMST0	= 0 ; Sequencer State Machine Master State
.equ	SSMMST1	= 1 ; Sequencer State Machine Master State
.equ	SSMMST2	= 2 ; Sequencer State Machine Master State
.equ	SSMMST3	= 3 ; Sequencer State Machine Master State
.equ	SSMMST4	= 4 ; Sequencer State Machine Master State

; SSMCR - SSM Control Register
.equ	SSMTGE	= 2 ; Sequencer State Machine Tx Gauss Enable
.equ	SSMTPE	= 3 ; Sequencer State Machine Tx Preemphasis Enable
.equ	SSMPVE	= 4 ; Sequencer State Machine PV Enable
.equ	SSMTAE	= 5 ; Sequencer State Machine Tx Ask-Shaping Enable

; SSMFBR - SSM Filter Bandwidth Register
.equ	SSMPLDT	= 5 ; Sequencer State Machine PLL Lock Delay Time

; SSMIFR - SSM Interrupt Flag Register
.equ	SSMIF	= 0 ; Sequencer State Machine Interrupt Flag

; SSMIMR - SSM interrupt mask register
.equ	SSMIM	= 0 ; Sequencer State Machine Interrupt Mask

; SSMRR - SSM Run Register
.equ	SSMR	= 0 ; Sequencer State Machine Run
.equ	SSMST	= 1 ; Sequencer State Machine Stop

; SSMSR - SSM Status Register
.equ	SSMESM0	= 0 ; Sequencer State Machine Error State Machine
.equ	SSMESM1	= 1 ; Sequencer State Machine Error State Machine
.equ	SSMESM2	= 2 ; Sequencer State Machine Error State Machine
.equ	SSMESM3	= 3 ; Sequencer State Machine Error State Machine
.equ	SSMERR	= 7 ; Sequencer State Machine Error

; SSMSTR - SSM State Register
.equ	SSMSTA0	= 0 ; Sequencer State Machine State A
.equ	SSMSTA1	= 1 ; Sequencer State Machine State A
.equ	SSMSTA2	= 2 ; Sequencer State Machine State A
.equ	SSMSTA3	= 3 ; Sequencer State Machine State A
.equ	SSMSTA4	= 4 ; Sequencer State Machine State A
.equ	SSMSTA5	= 5 ; Sequencer State Machine State A


; ***** SUP *****************
; SUPCR - Supply Control Register
.equ	AVCCRM	= 0 ; AVCC Reset Interrupt Mask
.equ	AVCCLM	= 1 ; AVCC Low Interrupt Mask
.equ	PVEN	= 2 ; Power amplifier Voltage supply Enable
.equ	AVDIC	= 3 ; AVCC Double Internal Current
.equ	AVEN	= 4 ; AVCC Enable
.equ	DVHEN	= 5 ; DVCC High Current Mode Enable

; SUPFR - Supply Interrupt Flag Register
.equ	AVCCRF	= 0 ; AVCC reset interrupt flag
.equ	AVCCLF	= 1 ; AVCC low interrupt flag

; VMCR - Voltage Monitor Control Register
.equ	VMLS0	= 0 ; Voltage Monitor Level Select
.equ	VMLS1	= 1 ; Voltage Monitor Level Select
.equ	VMLS2	= 2 ; Voltage Monitor Level Select
.equ	VMLS3	= 3 ; Voltage Monitor Level Select
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask
.equ	VMPS0	= 5 ; Voltage Monitor Power Supply Select
.equ	VMPS1	= 6 ; Voltage Monitor Power Supply Select
.equ	VMRS	= 7 ; Voltage Monitor Range Select

; VMSR - Voltage Monitor Status Register
.equ	VMF	= 0 ; Voltage Monitor Flag


; ***** TIMER0_WDT *****************
; T0CR - Timer0 Control Register
.equ	T0PS0	= 0 ; Timer0 Prescaler Select
.equ	T0PS1	= 1 ; Timer0 Prescaler Select
.equ	T0PS2	= 2 ; Timer0 Prescaler Select
.equ	T0IE	= 3 ; Timer0 Interrupt Enable
.equ	T0PR	= 4 ; Timer0 Prescaler Reset

; T0IFR - Timer0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer0 Flag

; WDTCR - Watchdog Timer0 control Register
.equ	WDPS0	= 0 ; Watchdog Prescaler Select
.equ	WDPS1	= 1 ; Watchdog Prescaler Select
.equ	WDPS2	= 2 ; Watchdog Prescaler Select
.equ	WDE	= 3 ; Watchdog System Reset Enable
.equ	WDCE	= 4 ; Watchdog Change Enable


; ***** TIMER1 *****************
; T1CNT - Timer1 Counter Register
.equ	T1CNT0	= 0 ; Timer1 Counter Register Bit 0
.equ	T1CNT1	= 1 ; Timer1 Counter Register Bit 1
.equ	T1CNT2	= 2 ; Timer1 Counter Register Bit 2
.equ	T1CNT3	= 3 ; Timer1 Counter Register Bit 3
.equ	T1CNT4	= 4 ; Timer1 Counter Register Bit 4
.equ	T1CNT5	= 5 ; Timer1 Counter Register Bit 5
.equ	T1CNT6	= 6 ; Timer1 Counter Register Bit 6
.equ	T1CNT7	= 7 ; Timer1 Counter Register Bit 7

; T1COR - Timer1 Compare Register
.equ	T1COR0	= 0 ; Timer1 Compare Register Bit 0
.equ	T1COR1	= 1 ; Timer1 Compare Register Bit 1
.equ	T1COR2	= 2 ; Timer1 Compare Register Bit 2
.equ	T1COR3	= 3 ; Timer1 Compare Register Bit 3
.equ	T1COR4	= 4 ; Timer1 Compare Register Bit 4
.equ	T1COR5	= 5 ; Timer1 Compare Register Bit 5
.equ	T1COR6	= 6 ; Timer1 Compare Register Bit 6
.equ	T1COR7	= 7 ; Timer1 Compare Register Bit 7

; T1CR - Timer1 control Register
.equ	T1OTM	= 0 ; Timer1 Overflow Toggle Mask
.equ	T1CTM	= 1 ; Timer1 Compare Toggle Mask
.equ	T1CRM	= 2 ; Timer1 Compare Reset Mask
.equ	T1TOP	= 4 ; Timer1 Toggle Output Preset
.equ	T1RES	= 5 ; Timer1 Reset
.equ	T1TOS	= 6 ; Timer1 Toggle with Start
.equ	T1ENA	= 7 ; Timer1 Enable

; T1IFR - Timer1 Interrupt Flag Register
.equ	T1OFF	= 0 ; Timer1 Overflow Flag
.equ	T1COF	= 1 ; Timer1 Compare Flag

; T1IMR - Timer1 Interrupt Mask Register
.equ	T1OIM	= 0 ; Timer1 Overflow Interrupt Mask
.equ	T1CIM	= 1 ; Timer1 Compare Interrupt Mask

; T1MR - Timer1 Mode Register
.equ	T1CS0	= 0 ; Timer1 Clock Select
.equ	T1CS1	= 1 ; Timer1 Clock Select
.equ	T1PS0	= 2 ; Timer1 Prescaler Select
.equ	T1PS1	= 3 ; Timer1 Prescaler Select
.equ	T1PS2	= 4 ; Timer1 Prescaler Select
.equ	T1PS3	= 5 ; Timer1 Prescaler Select
.equ	T1DC0	= 6 ; Timer1 Duty Cycle
.equ	T1DC1	= 7 ; Timer1 Duty Cycle


; ***** TIMER2 *****************
; T2CNT - Timer2 Counter Register
.equ	T2CNT0	= 0 ; Timer2 Counter Register Bit 0
.equ	T2CNT1	= 1 ; Timer2 Counter Register Bit 1
.equ	T2CNT2	= 2 ; Timer2 Counter Register Bit 2
.equ	T2CNT3	= 3 ; Timer2 Counter Register Bit 3
.equ	T2CNT4	= 4 ; Timer2 Counter Register Bit 4
.equ	T2CNT5	= 5 ; Timer2 Counter Register Bit 5
.equ	T2CNT6	= 6 ; Timer2 Counter Register Bit 6
.equ	T2CNT7	= 7 ; Timer2 Counter Register Bit 7

; T2COR - Timer2 Compare Register
.equ	T2COR0	= 0 ; Timer2 Compare Register Bit 0
.equ	T2COR1	= 1 ; Timer2 Compare Register Bit 1
.equ	T2COR2	= 2 ; Timer2 Compare Register Bit 2
.equ	T2COR3	= 3 ; Timer2 Compare Register Bit 3
.equ	T2COR4	= 4 ; Timer2 Compare Register Bit 4
.equ	T2COR5	= 5 ; Timer2 Compare Register Bit 5
.equ	T2COR6	= 6 ; Timer2 Compare Register Bit 6
.equ	T2COR7	= 7 ; Timer2 Compare Register Bit 7

; T2CR - Timer2 Control Register
.equ	T2OTM	= 0 ; Timer2 Overflow Toggle Mask
.equ	T2CTM	= 1 ; Timer2 Compare Toggle Mask
.equ	T2CRM	= 2 ; Timer2 Compare Reset Mask
.equ	T2TOP	= 4 ; Timer2 Toggle Output Preset
.equ	T2RES	= 5 ; Timer2 Reset
.equ	T2TOS	= 6 ; Timer2 Toggle with Start
.equ	T2ENA	= 7 ; Timer2 Enable

; T2IFR - Timer2 Interrupt Flag Register
.equ	T2OFF	= 0 ; Timer2 Overflow Flag
.equ	T2COF	= 1 ; Timer2 Compare Flag

; T2IMR - Timer2 Interrupt Mask Register
.equ	T2OIM	= 0 ; Timer2 Overflow Interrupt Mask
.equ	T2CIM	= 1 ; Timer2 Compare Interrupt Mask

; T2MR - Timer2 Mode Register
.equ	T2CS0	= 0 ; Timer2 Clock Select
.equ	T2CS1	= 1 ; Timer2 Clock Select
.equ	T2PS0	= 2 ; Timer2 Prescaler Select
.equ	T2PS1	= 3 ; Timer2 Prescaler Select
.equ	T2PS2	= 4 ; Timer2 Prescaler Select
.equ	T2PS3	= 5 ; Timer2 Prescaler Select
.equ	T2DC0	= 6 ; Timer2 Duty Cycle
.equ	T2DC1	= 7 ; Timer2 Duty Cycle


; ***** TIMER3 *****************
; T3CNT - Timer3 counter Register
.equ	T3CNTH0	= 0 ; Timer3 counter Register High Bit 8
.equ	T3CNTH1	= 1 ; Timer3 counter Register High Bit 9
.equ	T3CNTH2	= 2 ; Timer3 counter Register High Bit 10
.equ	T3CNTH3	= 3 ; Timer3 counter Register High Bit 11
.equ	T3CNTH4	= 4 ; Timer3 counter Register High Bit 12
.equ	T3CNTH5	= 5 ; Timer3 counter Register High Bit 13
.equ	T3CNTH6	= 6 ; Timer3 counter Register High Bit 14
.equ	T3CNTH7	= 7 ; Timer3 counter Register High Bit 15

.equ	T3CNTL0	= 0 ; Timer3 counter Register Low Bit 0
.equ	T3CNTL1	= 1 ; Timer3 counter Register Low Bit 1
.equ	T3CNTL2	= 2 ; Timer3 counter Register Low Bit 2
.equ	T3CNTL3	= 3 ; Timer3 counter Register Low Bit 3
.equ	T3CNTL4	= 4 ; Timer3 counter Register Low Bit 4
.equ	T3CNTL5	= 5 ; Timer3 counter Register Low Bit 5
.equ	T3CNTL6	= 6 ; Timer3 counter Register Low Bit 6
.equ	T3CNTL7	= 7 ; Timer3 counter Register Low Bit 7

; T3COR - Timer3 compare Register
.equ	T3CORH0	= 0 ; Timer3 compare Register High Bit 8
.equ	T3CORH1	= 1 ; Timer3 compare Register High Bit 9
.equ	T3CORH2	= 2 ; Timer3 compare Register High Bit 10
.equ	T3CORH3	= 3 ; Timer3 compare Register High Bit 11
.equ	T3CORH4	= 4 ; Timer3 compare Register High Bit 12
.equ	T3CORH5	= 5 ; Timer3 compare Register High Bit 13
.equ	T3CORH6	= 6 ; Timer3 compare Register High Bit 14
.equ	T3CORH7	= 7 ; Timer3 compare Register High Bit 15

.equ	T3CORL0	= 0 ; Timer3 compare Register Low Bit 0
.equ	T3CORL1	= 1 ; Timer3 compare Register Low Bit 1
.equ	T3CORL2	= 2 ; Timer3 compare Register Low Bit 2
.equ	T3CORL3	= 3 ; Timer3 compare Register Low Bit 3
.equ	T3CORL4	= 4 ; Timer3 compare Register Low Bit 4
.equ	T3CORL5	= 5 ; Timer3 compare Register Low Bit 5
.equ	T3CORL6	= 6 ; Timer3 compare Register Low Bit 6
.equ	T3CORL7	= 7 ; Timer3 compare Register Low Bit 7

; T3CR - Timer3 control Register
.equ	T3OTM	= 0 ; Timer3 Overflow Toggle Mask
.equ	T3CTM	= 1 ; Timer3 Compare Toggle Mask
.equ	T3CRM	= 2 ; Timer3 Compare Reset Mask
.equ	T3CPRM	= 3 ; Timer3 CaPture Reset Mask
.equ	T3TOP	= 4 ; Timer3 Toggle Output Preset
.equ	T3RES	= 5 ; Timer3 Reset
.equ	T3TOS	= 6 ; Timer3 Toggle with Start
.equ	T3ENA	= 7 ; Timer3 Enable

; T3ICR - Timer3 input capture Register
.equ	T3ICRH0	= 0 ; Timer3 input capture Register High Bit 8
.equ	T3ICRH1	= 1 ; Timer3 input capture Register High Bit 9
.equ	T3ICRH2	= 2 ; Timer3 input capture Register High Bit 10
.equ	T3ICRH3	= 3 ; Timer3 input capture Register High Bit 11
.equ	T3ICRH4	= 4 ; Timer3 input capture Register High Bit 12
.equ	T3ICRH5	= 5 ; Timer3 input capture Register High Bit 13
.equ	T3ICRH6	= 6 ; Timer3 input capture Register High Bit 14
.equ	T3ICRH7	= 7 ; Timer3 input capture Register High Bit 15

.equ	T3ICRL0	= 0 ; Timer3 input capture Register Low Bit 0
.equ	T3ICRL1	= 1 ; Timer3 input capture Register Low Bit 1
.equ	T3ICRL2	= 2 ; Timer3 input capture Register Low Bit 2
.equ	T3ICRL3	= 3 ; Timer3 input capture Register Low Bit 3
.equ	T3ICRL4	= 4 ; Timer3 input capture Register Low Bit 4
.equ	T3ICRL5	= 5 ; Timer3 input capture Register Low Bit 5
.equ	T3ICRL6	= 6 ; Timer3 input capture Register Low Bit 6
.equ	T3ICRL7	= 7 ; Timer3 input capture Register Low Bit 7

; T3IFR - Timer3 interrupt flag Register
.equ	T3OFF	= 0 ; Timer3 OverFlow Flag
.equ	T3COF	= 1 ; Timer3 Compare Flag
.equ	T3ICF	= 2 ; Timer3 Input Capture Flag

; T3IMR - Timer3 interrupt mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask
.equ	T3CIM	= 1 ; Timer3 Compare Interrupt Mask
.equ	T3CPIM	= 2 ; Timer3 Capture Interrupt Mask

; T3MRA - Timer3 mode Register
.equ	T3CS0	= 0 ; Timer3 Clock Select
.equ	T3CS1	= 1 ; Timer3 Clock Select
.equ	T3PS0	= 2 ; Timer3 Prescaler Select
.equ	T3PS1	= 3 ; Timer3 Prescaler Select
.equ	T3PS2	= 4 ; Timer3 Prescaler Select

; T3MRB - Timer3 mode Register
.equ	T3SCE	= 1 ; Timer3 Software Capture Enable
.equ	T3CNC	= 2 ; Timer3 input Capture Noise Canceller
.equ	T3CE0	= 3 ; Timer3 Capture Edge select
.equ	T3CE1	= 4 ; Timer3 Capture Edge select
.equ	T3ICS0	= 5 ; Timer3 Input Capture Select
.equ	T3ICS1	= 6 ; Timer3 Input Capture Select
.equ	T3ICS2	= 7 ; Timer3 Input Capture Select


; ***** TIMER4 *****************
; T4CNT - Timer4 counter Register
.equ	T4CNTH0	= 0 ; Timer4 counter Register High Bit 8
.equ	T4CNTH1	= 1 ; Timer4 counter Register High Bit 9
.equ	T4CNTH2	= 2 ; Timer4 counter Register High Bit 10
.equ	T4CNTH3	= 3 ; Timer4 counter Register High Bit 11
.equ	T4CNTH4	= 4 ; Timer4 counter Register High Bit 12
.equ	T4CNTH5	= 5 ; Timer4 counter Register High Bit 13
.equ	T4CNTH6	= 6 ; Timer4 counter Register High Bit 14
.equ	T4CNTH7	= 7 ; Timer4 counter Register High Bit 15

.equ	T4CNTL0	= 0 ; Timer4 counter Register Low Bit 0
.equ	T4CNTL1	= 1 ; Timer4 counter Register Low Bit 1
.equ	T4CNTL2	= 2 ; Timer4 counter Register Low Bit 2
.equ	T4CNTL3	= 3 ; Timer4 counter Register Low Bit 3
.equ	T4CNTL4	= 4 ; Timer4 counter Register Low Bit 4
.equ	T4CNTL5	= 5 ; Timer4 counter Register Low Bit 5
.equ	T4CNTL6	= 6 ; Timer4 counter Register Low Bit 6
.equ	T4CNTL7	= 7 ; Timer4 counter Register Low Bit 7

; T4COR - Timer4 compare Register
.equ	T4CORH0	= 0 ; Timer4 compare Register High Bit 8
.equ	T4CORH1	= 1 ; Timer4 compare Register High Bit 9
.equ	T4CORH2	= 2 ; Timer4 compare Register High Bit 10
.equ	T4CORH3	= 3 ; Timer4 compare Register High Bit 11
.equ	T4CORH4	= 4 ; Timer4 compare Register High Bit 12
.equ	T4CORH5	= 5 ; Timer4 compare Register High Bit 13
.equ	T4CORH6	= 6 ; Timer4 compare Register High Bit 14
.equ	T4CORH7	= 7 ; Timer4 compare Register High Bit 15

.equ	T4CORL0	= 0 ; Timer4 compare Register Low Bit 0
.equ	T4CORL1	= 1 ; Timer4 compare Register Low Bit 1
.equ	T4CORL2	= 2 ; Timer4 compare Register Low Bit 2
.equ	T4CORL3	= 3 ; Timer4 compare Register Low Bit 3
.equ	T4CORL4	= 4 ; Timer4 compare Register Low Bit 4
.equ	T4CORL5	= 5 ; Timer4 compare Register Low Bit 5
.equ	T4CORL6	= 6 ; Timer4 compare Register Low Bit 6
.equ	T4CORL7	= 7 ; Timer4 compare Register Low Bit 7

; T4CR - Timer4 control Register
.equ	T4OTM	= 0 ; Timer4 Overflow Toggle Mask
.equ	T4CTM	= 1 ; Timer4 Compare Toggle Mask
.equ	T4CRM	= 2 ; Timer4 Compare Reset Mask
.equ	T4CPRM	= 3 ; Timer4 CaPture Reset Mask
.equ	T4TOP	= 4 ; Timer4 Toggle Output Preset
.equ	T4RES	= 5 ; Timer4 Reset
.equ	T4TOS	= 6 ; Timer4 Toggle with Start
.equ	T4ENA	= 7 ; Timer4 Enable

; T4ICR - Timer4 input capture Register
.equ	T4ICRH0	= 0 ; Timer4 input capture Register High Bit 8
.equ	T4ICRH1	= 1 ; Timer4 input capture Register High Bit 9
.equ	T4ICRH2	= 2 ; Timer4 input capture Register High Bit 10
.equ	T4ICRH3	= 3 ; Timer4 input capture Register High Bit 11
.equ	T4ICRH4	= 4 ; Timer4 input capture Register High Bit 12
.equ	T4ICRH5	= 5 ; Timer4 input capture Register High Bit 13
.equ	T4ICRH6	= 6 ; Timer4 input capture Register High Bit 14
.equ	T4ICRH7	= 7 ; Timer4 input capture Register High Bit 15

.equ	T4ICRL0	= 0 ; Timer4 input capture Register Low Bit 0
.equ	T4ICRL1	= 1 ; Timer4 input capture Register Low Bit 1
.equ	T4ICRL2	= 2 ; Timer4 input capture Register Low Bit 2
.equ	T4ICRL3	= 3 ; Timer4 input capture Register Low Bit 3
.equ	T4ICRL4	= 4 ; Timer4 input capture Register Low Bit 4
.equ	T4ICRL5	= 5 ; Timer4 input capture Register Low Bit 5
.equ	T4ICRL6	= 6 ; Timer4 input capture Register Low Bit 6
.equ	T4ICRL7	= 7 ; Timer4 input capture Register Low Bit 7

; T4IFR - Timer4 interrupt flag Register
.equ	T4OFF	= 0 ; Timer4 OverFlow Flag
.equ	T4COF	= 1 ; Timer4 Compare Flag
.equ	T4ICF	= 2 ; Timer4 Input Capture Flag

; T4IMR - Timer4 interrupt mask Register
.equ	T4OIM	= 0 ; Timer4 Overflow Interrupt Mask
.equ	T4CIM	= 1 ; Timer4 Compare Interrupt Mask
.equ	T4CPIM	= 2 ; Timer4 Capture Interrupt Mask

; T4MRA - Timer4 mode Register
.equ	T4CS0	= 0 ; Timer4 Clock Select
.equ	T4CS1	= 1 ; Timer4 Clock Select
.equ	T4PS0	= 2 ; Timer4 Prescaler Select
.equ	T4PS1	= 3 ; Timer4 Prescaler Select
.equ	T4PS2	= 4 ; Timer4 Prescaler Select

; T4MRB - Timer4 mode Register
.equ	T4SCE	= 1 ; Timer4 Software Capture Enable
.equ	T4CNC	= 2 ; Timer4 input Capture Noise Canceller
.equ	T4CE0	= 3 ; Timer4 Capture Edge select
.equ	T4CE1	= 4 ; Timer4 Capture Edge select
.equ	T4ICS0	= 5 ; Timer4 Input Capture Select
.equ	T4ICS1	= 6 ; Timer4 Input Capture Select
.equ	T4ICS2	= 7 ; Timer4 Input Capture Select


; ***** TIMER5 *****************
; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; PreScaler Reset
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode

; T5CCR - Timer5 Control Register
.equ	T5CS0	= 0 ; Timer5 Clock Select
.equ	T5CS1	= 1 ; Timer5 Clock Select
.equ	T5CS2	= 2 ; Timer5 Clock Select
.equ	T5CTC	= 3 ; Clear Timer5 on Compare Match

; T5CNT - Timer5 Counter
.equ	T5CNTH0	= 0 ; Timer5 Counter High Bit 8
.equ	T5CNTH1	= 1 ; Timer5 Counter High Bit 9
.equ	T5CNTH2	= 2 ; Timer5 Counter High Bit 10
.equ	T5CNTH3	= 3 ; Timer5 Counter High Bit 11
.equ	T5CNTH4	= 4 ; Timer5 Counter High Bit 12
.equ	T5CNTH5	= 5 ; Timer5 Counter High Bit 13
.equ	T5CNTH6	= 6 ; Timer5 Counter High Bit 14
.equ	T5CNTH7	= 7 ; Timer5 Counter High Bit 15

.equ	T5CNTL0	= 0 ; Timer5 Counter Low Bit 0
.equ	T5CNTL1	= 1 ; Timer5 Counter Low Bit 1
.equ	T5CNTL2	= 2 ; Timer5 Counter Low Bit 2
.equ	T5CNTL3	= 3 ; Timer5 Counter Low Bit 3
.equ	T5CNTL4	= 4 ; Timer5 Counter Low Bit 4
.equ	T5CNTL5	= 5 ; Timer5 Counter Low Bit 5
.equ	T5CNTL6	= 6 ; Timer5 Counter Low Bit 6
.equ	T5CNTL7	= 7 ; Timer5 Counter Low Bit 7

; T5IFR - Timer5 Interrupt Flag Register
.equ	T5OFF	= 0 ; Timer5 Output Overflow Flag
.equ	T5COF	= 1 ; Timer5 Output Compare Output Match Flag

; T5IMR - Timer5 Interrupt Mask Register
.equ	T5OIM	= 0 ; Timer5 Output Overflow Interrupt Mask
.equ	T5CIM	= 1 ; Timer5 Output Compare Interrupt Mask

; T5OCR - Timer5 Output Compare Register
.equ	T5OCRH0	= 0 ; Timer5 Output Compare Register High Bit 8
.equ	T5OCRH1	= 1 ; Timer5 Output Compare Register High Bit 9
.equ	T5OCRH2	= 2 ; Timer5 Output Compare Register High Bit 10
.equ	T5OCRH3	= 3 ; Timer5 Output Compare Register High Bit 11
.equ	T5OCRH4	= 4 ; Timer5 Output Compare Register High Bit 12
.equ	T5OCRH5	= 5 ; Timer5 Output Compare Register High Bit 13
.equ	T5OCRH6	= 6 ; Timer5 Output Compare Register High Bit 14
.equ	T5OCRH7	= 7 ; Timer5 Output Compare Register High Bit 15

.equ	T5OCRL0	= 0 ; Timer5 Output Compare Register Low Bit 0
.equ	T5OCRL1	= 1 ; Timer5 Output Compare Register Low Bit 1
.equ	T5OCRL2	= 2 ; Timer5 Output Compare Register Low Bit 2
.equ	T5OCRL3	= 3 ; Timer5 Output Compare Register Low Bit 3
.equ	T5OCRL4	= 4 ; Timer5 Output Compare Register Low Bit 4
.equ	T5OCRL5	= 5 ; Timer5 Output Compare Register Low Bit 5
.equ	T5OCRL6	= 6 ; Timer5 Output Compare Register Low Bit 6
.equ	T5OCRL7	= 7 ; Timer5 Output Compare Register Low Bit 7

; T5TEMP - Timer5 Temp Register
.equ	T5TEMP0	= 0 ; Timer5 Temp Register Bit 0
.equ	T5TEMP1	= 1 ; Timer5 Temp Register Bit 1
.equ	T5TEMP2	= 2 ; Timer5 Temp Register Bit 2
.equ	T5TEMP3	= 3 ; Timer5 Temp Register Bit 3
.equ	T5TEMP4	= 4 ; Timer5 Temp Register Bit 4
.equ	T5TEMP5	= 5 ; Timer5 Temp Register Bit 5
.equ	T5TEMP6	= 6 ; Timer5 Temp Register Bit 6
.equ	T5TEMP7	= 7 ; Timer5 Temp Register Bit 7


; ***** TMO *****************
; TMOCR - Timer Modulator Output Control Register
.equ	TO1PIS0	= 0 ; Timer modulator Output 1 Port Interface Select
.equ	TO1PIS1	= 1 ; Timer modulator Output 1 Port Interface Select
.equ	TO2PIS0	= 2 ; Timer modulator Output 2 Port Interface Select
.equ	TO2PIS1	= 3 ; Timer modulator Output 2 Port Interface Select
.equ	TO3PIS0	= 4 ; Timer modulator Output 3 Port Interface Select
.equ	TO3PIS1	= 5 ; Timer modulator Output 3 Port Interface Select
.equ	TO4PIS0	= 6 ; Timer modulator Output 4 Port Interface Select
.equ	TO4PIS1	= 7 ; Timer modulator Output 4 Port Interface Select


; ***** TPLF_CAL *****************
; SRCCAL - Slow RC oscillator calibration Register
.equ	SRCCAL0	= 0 ; Slow RC oscillator calibration Register Bit 0
.equ	SRCCAL1	= 1 ; Slow RC oscillator calibration Register Bit 1
.equ	SRCCAL2	= 2 ; Slow RC oscillator calibration Register Bit 2
.equ	SRCCAL3	= 3 ; Slow RC oscillator calibration Register Bit 3
.equ	SRCCAL4	= 4 ; Slow RC oscillator calibration Register Bit 4
.equ	SRCCAL5	= 5 ; Slow RC oscillator calibration Register Bit 5
.equ	SRCCAL6	= 6 ; Slow RC oscillator calibration Register Bit 6
.equ	SRCCAL7	= 7 ; Slow RC oscillator calibration Register Bit 7


; ***** TRANSPONDER *****************
; TPCR1 - Transponder Control Register 1
.equ	TPQPLM	= 2 ; Transponder Quadrature Pulse Length Operation Modulation
.equ	TPBR	= 4 ; Transponder Bit Rate
.equ	TPDFCP0	= 5 ; Transponder Decoder Field Clock Prescaler value
.equ	TPDFCP1	= 6 ; Transponder Decoder Field Clock Prescaler value
.equ	TPMODE	= 7 ; Transponder Mode

; TPCR2 - Transponder Control 2 Register
.equ	TPMA	= 0 ; Transponder Mode Acknowledge
.equ	TPMOD	= 1 ; Transponder Modulation
.equ	TPPSD	= 2 ; Transponder Power Switch Disable
.equ	TPD	= 3 ; Transponder Disable
.equ	TPNFTO	= 4 ; Transponder No Field Timeout enable
.equ	TPWDLV0	= 5 ; Transponder watch dog value for No Field timeout (with SRC clk)
.equ	TPWDLV1	= 6 ; Transponder watch dog value for No Field timeout (with SRC clk)

; TPCR3 - Transponder Control Register 3
.equ	TPTD	= 0 ; Transponder Transmit Data
.equ	TPRD	= 1 ; Transponder Receive Data
.equ	TPTLIW	= 2 ; Transponder Transmit Listen Window
.equ	TPRCD	= 5 ; Transponder Reception Continuous Damping

; TPCR4 - Transponder Control Register 4
.equ	TPBCCS0	= 0 ; Transponder Battery Charge Current Select
.equ	TPBCCS1	= 1 ; Transponder Battery Charge Current Select
.equ	TPBCCS2	= 2 ; Transponder Battery Charge Current Select
.equ	TPBCCS3	= 3 ; Transponder Battery Charge Current Select
.equ	TPBCM	= 4 ; Transponder Battery Charge Mode

; TPCR5 - Transponder Control Register 5
.equ	TPMUD0	= 0 ; Transponder Modulation Undamped Level Select
.equ	TPMUD1	= 1 ; Transponder Modulation Undamped Level Select
.equ	TPMUD2	= 2 ; Transponder Modulation Undamped Level Select
.equ	TPMD0	= 4 ; Transponder Modulation Damping Select
.equ	TPMD1	= 5 ; Transponder Modulation Damping Select
.equ	TPMD2	= 6 ; Transponder Modulation Damping Select

; TPDCR1 - Transponder Decoder Comparator Register 1
.equ	TPDCL10	= 0 ; Transponder Decode Comparator Length value 1
.equ	TPDCL11	= 1 ; Transponder Decode Comparator Length value 1
.equ	TPDCL12	= 2 ; Transponder Decode Comparator Length value 1
.equ	TPDCL13	= 3 ; Transponder Decode Comparator Length value 1
.equ	TPDCL14	= 4 ; Transponder Decode Comparator Length value 1
.equ	TPDCL15	= 5 ; Transponder Decode Comparator Length value 1

; TPDCR2 - Transponder Decoder Comparator Register 2
.equ	TPDCL20	= 0 ; Transponder Decode Comparator Length value 2
.equ	TPDCL21	= 1 ; Transponder Decode Comparator Length value 2
.equ	TPDCL22	= 2 ; Transponder Decode Comparator Length value 2
.equ	TPDCL23	= 3 ; Transponder Decode Comparator Length value 2
.equ	TPDCL24	= 4 ; Transponder Decode Comparator Length value 2
.equ	TPDCL25	= 5 ; Transponder Decode Comparator Length value 2

; TPDCR3 - Transponder Decoder Comparator Register 3
.equ	TPDCL30	= 0 ; Transponder Decode Comparator Length value 3
.equ	TPDCL31	= 1 ; Transponder Decode Comparator Length value 3
.equ	TPDCL32	= 2 ; Transponder Decode Comparator Length value 3
.equ	TPDCL33	= 3 ; Transponder Decode Comparator Length value 3
.equ	TPDCL34	= 4 ; Transponder Decode Comparator Length value 3
.equ	TPDCL35	= 5 ; Transponder Decode Comparator Length value 3

; TPDCR4 - Transponder Decoder Comparator Register 4
.equ	TPDCL40	= 0 ; Transponder Decode Comparator Length value 4
.equ	TPDCL41	= 1 ; Transponder Decode Comparator Length value 4
.equ	TPDCL42	= 2 ; Transponder Decode Comparator Length value 4
.equ	TPDCL43	= 3 ; Transponder Decode Comparator Length value 4
.equ	TPDCL44	= 4 ; Transponder Decode Comparator Length value 4
.equ	TPDCL45	= 5 ; Transponder Decode Comparator Length value 4

; TPDCR5 - Transponder Decoder Comparator Register 5
.equ	TPDCL50	= 0 ; Transponder Decode Comparator Length value 5
.equ	TPDCL51	= 1 ; Transponder Decode Comparator Length value 5
.equ	TPDCL52	= 2 ; Transponder Decode Comparator Length value 5
.equ	TPDCL53	= 3 ; Transponder Decode Comparator Length value 5
.equ	TPDCL54	= 4 ; Transponder Decode Comparator Length value 5
.equ	TPDCL55	= 5 ; Transponder Decode Comparator Length value 5

; TPECMR - Transponder Encoder Mode Register
.equ	TPECM10	= 0 ; Transponder Encoder Mode 1
.equ	TPECM11	= 1 ; Transponder Encoder Mode 1
.equ	TPECM20	= 2 ; Transponder Encoder Mode 2
.equ	TPECM21	= 3 ; Transponder Encoder Mode 2
.equ	TPECM30	= 4 ; Transponder Encoder Mode 3
.equ	TPECM31	= 5 ; Transponder Encoder Mode 3
.equ	TPECM40	= 6 ; Transponder Encoder Mode 4
.equ	TPECM41	= 7 ; Transponder Encoder Mode 4

; TPECR1 - Transponder Encoder Comparator Register 1
.equ	TPECL10	= 0 ; Transponder Encode Comparator Length value 1
.equ	TPECL11	= 1 ; Transponder Encode Comparator Length value 1
.equ	TPECL12	= 2 ; Transponder Encode Comparator Length value 1
.equ	TPECL13	= 3 ; Transponder Encode Comparator Length value 1
.equ	TPECL14	= 4 ; Transponder Encode Comparator Length value 1
.equ	TPECL15	= 5 ; Transponder Encode Comparator Length value 1
.equ	TPECL16	= 6 ; Transponder Encode Comparator Length value 1
.equ	TPECL17	= 7 ; Transponder Encode Comparator Length value 1

; TPECR2 - Transponder Encoder Comparator Register 2
.equ	TPECL20	= 0 ; Transponder Encode Comparator Length value 2
.equ	TPECL21	= 1 ; Transponder Encode Comparator Length value 2
.equ	TPECL22	= 2 ; Transponder Encode Comparator Length value 2
.equ	TPECL23	= 3 ; Transponder Encode Comparator Length value 2
.equ	TPECL24	= 4 ; Transponder Encode Comparator Length value 2
.equ	TPECL25	= 5 ; Transponder Encode Comparator Length value 2
.equ	TPECL26	= 6 ; Transponder Encode Comparator Length value 2
.equ	TPECL27	= 7 ; Transponder Encode Comparator Length value 2

; TPECR3 - Transponder Encoder Comparator Register 3
.equ	TPECL30	= 0 ; Transponder Encode Comparator Length value 3
.equ	TPECL31	= 1 ; Transponder Encode Comparator Length value 3
.equ	TPECL32	= 2 ; Transponder Encode Comparator Length value 3
.equ	TPECL33	= 3 ; Transponder Encode Comparator Length value 3
.equ	TPECL34	= 4 ; Transponder Encode Comparator Length value 3
.equ	TPECL35	= 5 ; Transponder Encode Comparator Length value 3
.equ	TPECL36	= 6 ; Transponder Encode Comparator Length value 3
.equ	TPECL37	= 7 ; Transponder Encode Comparator Length value 3

; TPECR4 - Transponder Encoder Comparator Register 4
.equ	TPECL40	= 0 ; Transponder Encode Comparator Length value 4
.equ	TPECL41	= 1 ; Transponder Encode Comparator Length value 4
.equ	TPECL42	= 2 ; Transponder Encode Comparator Length value 4
.equ	TPECL43	= 3 ; Transponder Encode Comparator Length value 4
.equ	TPECL44	= 4 ; Transponder Encode Comparator Length value 4
.equ	TPECL45	= 5 ; Transponder Encode Comparator Length value 4
.equ	TPECL46	= 6 ; Transponder Encode Comparator Length value 4
.equ	TPECL47	= 7 ; Transponder Encode Comparator Length value 4

; TPFR - Transponder Flag Register
.equ	TPF	= 0 ; Transponder Flag
.equ	TPFTF	= 1 ; Transponder Field Timeout Flag
.equ	TPNFTF	= 2 ; Transponder No Field Timeout Flag
.equ	TPBERF	= 3 ; Transponder Bit Error Flag

; TPIMR - Transponder Interrupt Mask Register
.equ	TPIM	= 0 ; Transponder Interrupt Mask
.equ	TPFTIM	= 1 ; Transponder Field Timeout Interrupt Mask
.equ	TPNFTIM	= 2 ; Transponder No Field Timeout Interrupt Mask
.equ	TPBERIM	= 3 ; Transponder Bit Error Interrupt Mask

; TPSR - Transponder Status Register
.equ	TPA	= 0 ; Transponder Active
.equ	TPGAP	= 1 ; Transponder GAP Signal
.equ	TPPSW	= 2 ; Transponder Power Switch
.equ	TPBCOK	= 3 ; Transponder Battery Charge OK


; ***** TWI *****************
; TWAMR - TWI Address Mask Register
.equ	TWAM0	= 1 ; TWI Address Mask
.equ	TWAM1	= 2 ; TWI Address Mask
.equ	TWAM2	= 3 ; TWI Address Mask
.equ	TWAM3	= 4 ; TWI Address Mask
.equ	TWAM4	= 5 ; TWI Address Mask
.equ	TWAM5	= 6 ; TWI Address Mask
.equ	TWAM6	= 7 ; TWI Address Mask

; TWAR - TWI (Slave) Address Register
.equ	TWGCE	= 0 ; TWI General Call Recognition Enable
.equ	TWA0	= 1 ; TWI (Slave) Address
.equ	TWA1	= 2 ; TWI (Slave) Address
.equ	TWA2	= 3 ; TWI (Slave) Address
.equ	TWA3	= 4 ; TWI (Slave) Address
.equ	TWA4	= 5 ; TWI (Slave) Address
.equ	TWA5	= 6 ; TWI (Slave) Address
.equ	TWA6	= 7 ; TWI (Slave) Address

; TWBR - TWI Bit Rate Register
.equ	TWBR0	= 0 ; TWI Bit Rate Register Bit 0
.equ	TWBR1	= 1 ; TWI Bit Rate Register Bit 1
.equ	TWBR2	= 2 ; TWI Bit Rate Register Bit 2
.equ	TWBR3	= 3 ; TWI Bit Rate Register Bit 3
.equ	TWBR4	= 4 ; TWI Bit Rate Register Bit 4
.equ	TWBR5	= 5 ; TWI Bit Rate Register Bit 5
.equ	TWBR6	= 6 ; TWI Bit Rate Register Bit 6
.equ	TWBR7	= 7 ; TWI Bit Rate Register Bit 7

; TWCR - TWI Control Register
.equ	TWIE	= 0 ; TWI Interrupt Enable
.equ	TWEN	= 2 ; TWI Enable Bit
.equ	TWWC	= 3 ; TWI Write Collision Flag
.equ	TWSTO	= 4 ; TWI STOP Condition
.equ	TWSTA	= 5 ; TWI START Condition
.equ	TWEA	= 6 ; TWI Enable Acknowledge
.equ	TWINT	= 7 ; TWI Interrupt Flag

; TWDR - TWI Data Register
.equ	TWDR0	= 0 ; TWI Data Register Bit 0
.equ	TWDR1	= 1 ; TWI Data Register Bit 1
.equ	TWDR2	= 2 ; TWI Data Register Bit 2
.equ	TWDR3	= 3 ; TWI Data Register Bit 3
.equ	TWDR4	= 4 ; TWI Data Register Bit 4
.equ	TWDR5	= 5 ; TWI Data Register Bit 5
.equ	TWDR6	= 6 ; TWI Data Register Bit 6
.equ	TWDR7	= 7 ; TWI Data Register Bit 7

; TWSR - TWI Status Register
.equ	TWPS0	= 0 ; TWI Prescaler
.equ	TWPS1	= 1 ; TWI Prescaler
.equ	TWS0	= 3 ; TWI Status
.equ	TWS1	= 4 ; TWI Status
.equ	TWS2	= 5 ; TWI Status
.equ	TWS3	= 6 ; TWI Status
.equ	TWS4	= 7 ; TWI Status


; ***** TXDSP *****************
; FFREQ1H - Fractional Frequency 1 Setting, High Byte
.equ	FFREQ1H0	= 0 ; Fractional Frequency 1 Setting, High Byte Bit 0
.equ	FFREQ1H1	= 1 ; Fractional Frequency 1 Setting, High Byte Bit 1

; FFREQ1M - Fractional Frequency 1 Setting, Middle Byte
.equ	FFREQ1M0	= 0 ; Fractional Frequency 1 Setting, Middle Byte Bit 0
.equ	FFREQ1M1	= 1 ; Fractional Frequency 1 Setting, Middle Byte Bit 1
.equ	FFREQ1M2	= 2 ; Fractional Frequency 1 Setting, Middle Byte Bit 2
.equ	FFREQ1M3	= 3 ; Fractional Frequency 1 Setting, Middle Byte Bit 3
.equ	FFREQ1M4	= 4 ; Fractional Frequency 1 Setting, Middle Byte Bit 4
.equ	FFREQ1M5	= 5 ; Fractional Frequency 1 Setting, Middle Byte Bit 5
.equ	FFREQ1M6	= 6 ; Fractional Frequency 1 Setting, Middle Byte Bit 6
.equ	FFREQ1M7	= 7 ; Fractional Frequency 1 Setting, Middle Byte Bit 7

; FFREQ1L - Fractional Frequency 1 Setting, Low Byte
.equ	FFREQ1L0	= 0 ; Fractional Frequency 1 Setting, Low Byte Bit 0
.equ	FFREQ1L1	= 1 ; Fractional Frequency 1 Setting, Low Byte Bit 1
.equ	FFREQ1L2	= 2 ; Fractional Frequency 1 Setting, Low Byte Bit 2
.equ	FFREQ1L3	= 3 ; Fractional Frequency 1 Setting, Low Byte Bit 3
.equ	FFREQ1L4	= 4 ; Fractional Frequency 1 Setting, Low Byte Bit 4
.equ	FFREQ1L5	= 5 ; Fractional Frequency 1 Setting, Low Byte Bit 5
.equ	FFREQ1L6	= 6 ; Fractional Frequency 1 Setting, Low Byte Bit 6
.equ	FFREQ1L7	= 7 ; Fractional Frequency 1 Setting, Low Byte Bit 7

; FFREQ2H - Fractional Frequency 2 Setting, High Byte
.equ	FFREQ2H0	= 0 ; Fractional Frequency 2 Setting, High Byte Bit 0
.equ	FFREQ2H1	= 1 ; Fractional Frequency 2 Setting, High Byte Bit 1

; FFREQ2M - Fractional Frequency 2 Setting, Middle Byte
.equ	FFREQ2M0	= 0 ; Fractional Frequency 2 Setting, Middle Byte Bit 0
.equ	FFREQ2M1	= 1 ; Fractional Frequency 2 Setting, Middle Byte Bit 1
.equ	FFREQ2M2	= 2 ; Fractional Frequency 2 Setting, Middle Byte Bit 2
.equ	FFREQ2M3	= 3 ; Fractional Frequency 2 Setting, Middle Byte Bit 3
.equ	FFREQ2M4	= 4 ; Fractional Frequency 2 Setting, Middle Byte Bit 4
.equ	FFREQ2M5	= 5 ; Fractional Frequency 2 Setting, Middle Byte Bit 5
.equ	FFREQ2M6	= 6 ; Fractional Frequency 2 Setting, Middle Byte Bit 6
.equ	FFREQ2M7	= 7 ; Fractional Frequency 2 Setting, Middle Byte Bit 7

; FFREQ2L - Fractional Frequency 2 Setting, Low Byte
.equ	FFREQ2L0	= 0 ; Fractional Frequency 2 Setting, Low Byte Bit 0
.equ	FFREQ2L1	= 1 ; Fractional Frequency 2 Setting, Low Byte Bit 1
.equ	FFREQ2L2	= 2 ; Fractional Frequency 2 Setting, Low Byte Bit 2
.equ	FFREQ2L3	= 3 ; Fractional Frequency 2 Setting, Low Byte Bit 3
.equ	FFREQ2L4	= 4 ; Fractional Frequency 2 Setting, Low Byte Bit 4
.equ	FFREQ2L5	= 5 ; Fractional Frequency 2 Setting, Low Byte Bit 5
.equ	FFREQ2L6	= 6 ; Fractional Frequency 2 Setting, Low Byte Bit 6
.equ	FFREQ2L7	= 7 ; Fractional Frequency 2 Setting, Low Byte Bit 7

; FSCR - Frequency Synthesizer Control Register
.equ	TXMOD	= 0 ; Tx Modulation
.equ	SFM	= 1 ; Select FSK Modulation
.equ	TXMS0	= 2 ; Tx Modulation Source
.equ	TXMS1	= 3 ; Tx Modulation Source
.equ	PAOER	= 4 ; Power Amplifier Output Enable Register
.equ	PAON	= 7 ; Power Amplifier Output is On

; FSEN - Frequency Synthesizer Enable register
.equ	SDPU	= 0 ; Sigma-delta Modulator Power Up
.equ	SDEN	= 1 ; Sigma-delta Modulator Enable
.equ	GAEN	= 2 ; Gauss Filtering Enable
.equ	PEEN	= 3 ; Pre-emphasis Filtering Enable
.equ	ASEN	= 4 ; ASK Shaping Enable
.equ	ANTT	= 5 ; Antenna Tuning Active

; FSFCR - Frequency Synthesizer Filter Control Register
.equ	BTSEL0	= 0 ; Gauss Filter BT Selection
.equ	BTSEL1	= 1 ; Gauss Filter BT Selection
.equ	ASDIV0	= 4 ; ASK Shaping Divider
.equ	ASDIV1	= 5 ; ASK Shaping Divider
.equ	ASDIV2	= 6 ; ASK Shaping Divider
.equ	ASDIV3	= 7 ; ASK Shaping Divider

; GACDIV - Gauss Clock Divider
.equ	GACDIVH0	= 0 ; Gauss Clock Divider High Bit 8
.equ	GACDIVH1	= 1 ; Gauss Clock Divider High Bit 9
.equ	GACDIVH2	= 2 ; Gauss Clock Divider High Bit 10
.equ	GACDIVH3	= 3 ; Gauss Clock Divider High Bit 11
.equ	GACDIVH4	= 4 ; Gauss Clock Divider High Bit 12

.equ	GACDIVL0	= 0 ; Gauss Clock Divider Low Bit 0
.equ	GACDIVL1	= 1 ; Gauss Clock Divider Low Bit 1
.equ	GACDIVL2	= 2 ; Gauss Clock Divider Low Bit 2
.equ	GACDIVL3	= 3 ; Gauss Clock Divider Low Bit 3
.equ	GACDIVL4	= 4 ; Gauss Clock Divider Low Bit 4
.equ	GACDIVL5	= 5 ; Gauss Clock Divider Low Bit 5
.equ	GACDIVL6	= 6 ; Gauss Clock Divider Low Bit 6
.equ	GACDIVL7	= 7 ; Gauss Clock Divider Low Bit 7


; ***** TXM *****************
; TMCI - Tx Modulator CRC Init Value
.equ	TMCIH0	= 0 ; Tx Modulator CRC Init Value High Bit 8
.equ	TMCIH1	= 1 ; Tx Modulator CRC Init Value High Bit 9
.equ	TMCIH2	= 2 ; Tx Modulator CRC Init Value High Bit 10
.equ	TMCIH3	= 3 ; Tx Modulator CRC Init Value High Bit 11
.equ	TMCIH4	= 4 ; Tx Modulator CRC Init Value High Bit 12
.equ	TMCIH5	= 5 ; Tx Modulator CRC Init Value High Bit 13
.equ	TMCIH6	= 6 ; Tx Modulator CRC Init Value High Bit 14
.equ	TMCIH7	= 7 ; Tx Modulator CRC Init Value High Bit 15

.equ	TMCIL0	= 0 ; Tx Modulator CRC Init Value Low Bit 0
.equ	TMCIL1	= 1 ; Tx Modulator CRC Init Value Low Bit 1
.equ	TMCIL2	= 2 ; Tx Modulator CRC Init Value Low Bit 2
.equ	TMCIL3	= 3 ; Tx Modulator CRC Init Value Low Bit 3
.equ	TMCIL4	= 4 ; Tx Modulator CRC Init Value Low Bit 4
.equ	TMCIL5	= 5 ; Tx Modulator CRC Init Value Low Bit 5
.equ	TMCIL6	= 6 ; Tx Modulator CRC Init Value Low Bit 6
.equ	TMCIL7	= 7 ; Tx Modulator CRC Init Value Low Bit 7

; TMCP - Tx Modulator CRC Polynomial
.equ	TMCPH0	= 0 ; Tx Modulator CRC Polynomial High Bit 8
.equ	TMCPH1	= 1 ; Tx Modulator CRC Polynomial High Bit 9
.equ	TMCPH2	= 2 ; Tx Modulator CRC Polynomial High Bit 10
.equ	TMCPH3	= 3 ; Tx Modulator CRC Polynomial High Bit 11
.equ	TMCPH4	= 4 ; Tx Modulator CRC Polynomial High Bit 12
.equ	TMCPH5	= 5 ; Tx Modulator CRC Polynomial High Bit 13
.equ	TMCPH6	= 6 ; Tx Modulator CRC Polynomial High Bit 14
.equ	TMCPH7	= 7 ; Tx Modulator CRC Polynomial High Bit 15

.equ	TMCPL0	= 0 ; Tx Modulator CRC Polynomial Low Bit 0
.equ	TMCPL1	= 1 ; Tx Modulator CRC Polynomial Low Bit 1
.equ	TMCPL2	= 2 ; Tx Modulator CRC Polynomial Low Bit 2
.equ	TMCPL3	= 3 ; Tx Modulator CRC Polynomial Low Bit 3
.equ	TMCPL4	= 4 ; Tx Modulator CRC Polynomial Low Bit 4
.equ	TMCPL5	= 5 ; Tx Modulator CRC Polynomial Low Bit 5
.equ	TMCPL6	= 6 ; Tx Modulator CRC Polynomial Low Bit 6
.equ	TMCPL7	= 7 ; Tx Modulator CRC Polynomial Low Bit 7

; TMCR1 - Tx Modulator Control Register 1
.equ	TMPIS0	= 0 ; Tx Modulator Port Interface Select
.equ	TMPIS1	= 1 ; Tx Modulator Port Interface Select
.equ	TMPIS2	= 2 ; Tx Modulator Port Interface Select
.equ	TMSCS	= 3 ; Tx Modulator Serial Output Clock Select
.equ	TMCIM	= 4 ; Tx Modulator Transmission Complete Interrupt Mask

; TMCR2 - Tx Modulator Control Register 2
.equ	TMCRCE	= 0 ; Tx Modulator CRC Enable
.equ	TMCRCSE0	= 1 ; Tx Modulator CRC Select
.equ	TMCRCSE1	= 2 ; Tx Modulator CRC Select
.equ	TMNRZE	= 3 ; Tx Modulator NRZ Mode Enable
.equ	TMPOL	= 4 ; Tx Modulator Polarity
.equ	TMSSE	= 5 ; Tx Modulator Stop Sequence Enable
.equ	TMLSB	= 6 ; Tx Modulator Least Significant Bit First

; TMCRC - Tx Modulator CRC Result
.equ	TMCRCH0	= 0 ; Tx Modulator CRC Result High Bit 8
.equ	TMCRCH1	= 1 ; Tx Modulator CRC Result High Bit 9
.equ	TMCRCH2	= 2 ; Tx Modulator CRC Result High Bit 10
.equ	TMCRCH3	= 3 ; Tx Modulator CRC Result High Bit 11
.equ	TMCRCH4	= 4 ; Tx Modulator CRC Result High Bit 12
.equ	TMCRCH5	= 5 ; Tx Modulator CRC Result High Bit 13
.equ	TMCRCH6	= 6 ; Tx Modulator CRC Result High Bit 14
.equ	TMCRCH7	= 7 ; Tx Modulator CRC Result High Bit 15

.equ	TMCRCL0	= 0 ; Tx Modulator CRC Result Low Bit 0
.equ	TMCRCL1	= 1 ; Tx Modulator CRC Result Low Bit 1
.equ	TMCRCL2	= 2 ; Tx Modulator CRC Result Low Bit 2
.equ	TMCRCL3	= 3 ; Tx Modulator CRC Result Low Bit 3
.equ	TMCRCL4	= 4 ; Tx Modulator CRC Result Low Bit 4
.equ	TMCRCL5	= 5 ; Tx Modulator CRC Result Low Bit 5
.equ	TMCRCL6	= 6 ; Tx Modulator CRC Result Low Bit 6
.equ	TMCRCL7	= 7 ; Tx Modulator CRC Result Low Bit 7

; TMCSB - Tx Modulator CRC Skip Bit Number
.equ	TMCSB0	= 0 ; Tx Modulator CRC Skip Bit Number Bit 0
.equ	TMCSB1	= 1 ; Tx Modulator CRC Skip Bit Number Bit 1
.equ	TMCSB2	= 2 ; Tx Modulator CRC Skip Bit Number Bit 2
.equ	TMCSB3	= 3 ; Tx Modulator CRC Skip Bit Number Bit 3
.equ	TMCSB4	= 4 ; Tx Modulator CRC Skip Bit Number Bit 4
.equ	TMCSB5	= 5 ; Tx Modulator CRC Skip Bit Number Bit 5
.equ	TMCSB6	= 6 ; Tx Modulator CRC Skip Bit Number Bit 6
.equ	TMCSB7	= 7 ; Tx Modulator CRC Skip Bit Number Bit 7

; TMFSM - Tx Modulator Finite State Machine
.equ	TMSSM0	= 0 ; Tx Modulator Sub State Machine
.equ	TMSSM1	= 1 ; Tx Modulator Sub State Machine
.equ	TMSSM2	= 2 ; Tx Modulator Sub State Machine
.equ	TMSSM3	= 3 ; Tx Modulator Sub State Machine
.equ	TMMSM0	= 4 ; Tx Modulator Master State Machine
.equ	TMMSM1	= 5 ; Tx Modulator Master State Machine
.equ	TMMSM2	= 6 ; Tx Modulator Master State Machine

; TMSHR - Tx Modulator Shift Register
.equ	TMSHR0	= 0 ; Tx Modulator Shift Register Bit 0
.equ	TMSHR1	= 1 ; Tx Modulator Shift Register Bit 1
.equ	TMSHR2	= 2 ; Tx Modulator Shift Register Bit 2
.equ	TMSHR3	= 3 ; Tx Modulator Shift Register Bit 3
.equ	TMSHR4	= 4 ; Tx Modulator Shift Register Bit 4
.equ	TMSHR5	= 5 ; Tx Modulator Shift Register Bit 5
.equ	TMSHR6	= 6 ; Tx Modulator Shift Register Bit 6
.equ	TMSHR7	= 7 ; Tx Modulator Shift Register Bit 7

; TMSR - Tx Modulator Status Register
.equ	TMTCF	= 0 ; Tx Modulator Transmission Complete Status Flag

; TMSSC - Tx Modulator Stop Sequence Configuration
.equ	TMSSP0	= 0 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP1	= 1 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP2	= 2 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP3	= 3 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSL0	= 4 ; Tx Modulator Stop Sequence Length
.equ	TMSSL1	= 5 ; Tx Modulator Stop Sequence Length
.equ	TMSSL2	= 6 ; Tx Modulator Stop Sequence Length
.equ	TMSSH	= 7 ; Tx Modulator Stop Sequence Hold Mode

; TMTLL - Tx Modulator Telegram Length Register
.equ	TMTLLH0	= 0 ; Tx Modulator Telegram Length Register High Bit 8
.equ	TMTLLH1	= 1 ; Tx Modulator Telegram Length Register High Bit 9
.equ	TMTLLH2	= 2 ; Tx Modulator Telegram Length Register High Bit 10
.equ	TMTLLH3	= 3 ; Tx Modulator Telegram Length Register High Bit 11

.equ	TMTLLL0	= 0 ; Tx Modulator Telegram Length Register Low Bit 0
.equ	TMTLLL1	= 1 ; Tx Modulator Telegram Length Register Low Bit 1
.equ	TMTLLL2	= 2 ; Tx Modulator Telegram Length Register Low Bit 2
.equ	TMTLLL3	= 3 ; Tx Modulator Telegram Length Register Low Bit 3
.equ	TMTLLL4	= 4 ; Tx Modulator Telegram Length Register Low Bit 4
.equ	TMTLLL5	= 5 ; Tx Modulator Telegram Length Register Low Bit 5
.equ	TMTLLL6	= 6 ; Tx Modulator Telegram Length Register Low Bit 6
.equ	TMTLLL7	= 7 ; Tx Modulator Telegram Length Register Low Bit 7


; ***** FUSE *****************
; LOW - 
.equ	EXTCLKEN	= 0 ; External Clock enable
.equ	EEACC	= 1 ; EEPROM Access Control
.equ	BOOTRST	= 2 ; Select interrupt vector location
.equ	EESAVE	= 3 ; Preserve EEPROM memory through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	CKDIV8	= 7 ; Divide clock by 8 internally


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x0000 ; Note: Word address
.equ	FLASHEND	= 0x7FFF ; Note: Word address
.equ	IOEND	= 0x01FF
.equ	SRAM_START	= 0x0200
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x05FF
.equ	E2END	= 0x08FF
.equ	EEPROMEND	= 0x08FF
.equ	EEADRBITS	= 12
.equ	XRAMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 65536
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x200
#pragma AVRPART MEMORY EEPROM 2304

; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0004 ; External Interrupt Request 1
.equ	PCI0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCI1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	VMONaddr	 = 0x000A ; Voltage Monitoring Interrupt
.equ	AVCCRaddr	 = 0x000C ; AVCC Reset Interrupt
.equ	AVCCLaddr	 = 0x000E ; AVCC Low Interrupt
.equ	T0INTaddr	 = 0x0010 ; Timer0 Interval Interrupt
.equ	T1COMPaddr	 = 0x0012 ; Timer/Counter1 Compare Match Interrupt
.equ	T1OVFaddr	 = 0x0014 ; Timer/Counter1 Overflow Interrupt
.equ	T2COMPaddr	 = 0x0016 ; Timer/Counter2 Compare Match Interrupt
.equ	T2OVFaddr	 = 0x0018 ; Timer/Counter2 Overflow Interrupt
.equ	T3CAPaddr	 = 0x001A ; Timer/Counter3 Capture Event Interrupt
.equ	T3COMPaddr	 = 0x001C ; Timer/Counter3 Compare Match Interrupt
.equ	T3OVFaddr	 = 0x001E ; Timer/Counter3 Overflow Interrupt
.equ	T4CAPaddr	 = 0x0020 ; Timer/Counter4 Capture Event Interrupt
.equ	T4COMPaddr	 = 0x0022 ; Timer/Counter4 Compare Match Interrupt
.equ	T4OVFaddr	 = 0x0024 ; Timer/Counter4 Overflow Interrupt
.equ	T5COMPaddr	 = 0x0026 ; Timer/Counter5 Compare Match Interrupt
.equ	T5OVFaddr	 = 0x0028 ; Timer/Counter5 Overflow Interrupt
.equ	SPIaddr	 = 0x002A ; SPI Serial Transfer Complete Interrupt
.equ	SRX_FIFOaddr	 = 0x002C ; SPI Rx Buffer Interrupt
.equ	STX_FIFOaddr	 = 0x002E ; SPI Tx Buffer Interrupt
.equ	SSMaddr	 = 0x0030 ; Sequencer State Machine Interrupt
.equ	DFFLRaddr	 = 0x0032 ; Data FIFO fill level reached Interrupt
.equ	DFOUEaddr	 = 0x0034 ; Data FIFO overflow or underflow error Interrupt
.equ	SFFLRaddr	 = 0x0036 ; RSSI/Preamble FIFO fill level reached Interrupt
.equ	SFOUEaddr	 = 0x0038 ; RSSI/Preamble FIFO overflow or underflow error Interrupt
.equ	TMTCFaddr	 = 0x003A ; Tx Modulator Telegram Finish Interrupt
.equ	AESaddr	 = 0x003C ; AES Krypto Unit Interrupt
.equ	TPINTaddr	 = 0x003E ; Transponder Mode Interrupt
.equ	TPTOERRaddr	 = 0x0040 ; Transponder Timeout Error Interrupt
.equ	LFID0INTaddr	 = 0x0042 ; LF receiver Identifier 0 Interrupt
.equ	LFID1INTaddr	 = 0x0044 ; LF receiver Identifier 1 Interrupt
.equ	LFFEINTaddr	 = 0x0046 ; LF receiver Frame End Interrupt
.equ	LFBCRaddr	 = 0x0048 ; LF receiver Bit Count Reached Interrupt
.equ	LFPBDaddr	 = 0x004A ; LF receiver PreBurst Detected Interrupt
.equ	LFDEaddr	 = 0x004C ; LF receiver Decoder Error Interrupt
.equ	LFEOTaddr	 = 0x004E ; LF receiver End of Telegram Interrupt
.equ	LFTCORaddr	 = 0x0050 ; LF receiver Timer Compare Match Interrupt
.equ	LFRSCOaddr	 = 0x0052 ; LF receiver RSSI measurement Interrupt
.equ	PHFFLRaddr	 = 0x0054 ; Protocol Handler FIFO Fill Level Reached Interrupt
.equ	PHFOUEaddr	 = 0x0056 ; Protocol Handler FIFO Overflow or Underflow Error Interrupt
.equ	EXCMaddr	 = 0x0058 ; External input Clock monitoring Interrupt
.equ	E2CINTaddr	 = 0x005A ; EEPROM Error Correction Interrupt
.equ	ERDYaddr	 = 0x005C ; EEPROM Ready Interrupt
.equ	SPMRaddr	 = 0x005E ; Store Program Memory Ready
.equ	TWIaddr	 = 0x0060 ; TWI Interrupt

.equ	INT_VECTORS_SIZE	= 98 ; size in words

#endif /* _A5702M322DEF_INC_ */

; ***** END OF FILE ******************************************************



