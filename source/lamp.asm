;;; ========================================================================
;;; Lamp.asm
;;; (c) Andreas Müller
;;;     see LICENSE.md
;;; ========================================================================

	.if __MCU__ == 328
	.include "ports.atmega328p.inc"
        .elseif __MCU__ == 8
        .include "ports.atmega8.inc"
        .else
        .error
	.endif

;;; ========================================================================
;;; Macros
;;; ========================================================================

	.macro ldiw reg val
	ldi (\reg), lo8(\val)
	ldi (\reg+1), hi8(\val)
	.endm

	.macro ldip reg val
	ldi (\reg), pm_lo8(\val)
	ldi (\reg+1), pm_hi8(\val)
	.endm

	.macro dbg pulse=1
	sbi DbgPin, DbgIdx
	sbi DbgPin, DbgIdx
	.if \pulse-1
	dbg \pulse-1
	.endif
	.endm

;;; ========================================================================
;;; Registers
;;; ========================================================================

	;; setup GCC registers
	;; clr _Zero
	;; R0, T scratch
	;; R18-27,30-31 call-clobbered
	;; r2-17,28,29 call-saved

	_Zero = 1

;;; ========================================================================
;;; SRAM
;;; ========================================================================

        MemRnd = RAMSTART
        MemNext = MemRnd + 4

;;; ========================================================================
;;; void main()
;;; ========================================================================
	.global Main
Main:
        clr _Zero

        sbi LedDdr, LedIdx

        ldi 24, 0x55
        sts MemRnd+0, 24
        sts MemRnd+2, 24
        ldi 24, 0xaa
        sts MemRnd+1, 24
        sts MemRnd+3, 24
MainLoop:
        rcall loop
        rjmp MainLoop

;;; ========================================================================
;;; void SendDataRGB(unsigned char r, unsigned char g, unsigned char b)
;;; ========================================================================
	.global SendDataRGB
SendDataRGB:
	push 16
	push 20
	push 24
	in 16, SREG

	mov 24, 22
	rcall SendDataByte
	pop 24
	rcall SendDataByte
	pop 24
	rcall SendDataByte

	out SREG, 16
	pop 16
	ret

;;; ========================================================================
;;; void SendDataByte(unsigned char byte)
;;; ========================================================================
	.macro nops cnt=2
	nop
	.if \cnt-1
	nops \cnt-1
	.endif
	.endm

	.global SendDataByte
	_BitCnt = 22
	_Byte = 24
SendDataByte:
	ldi _BitCnt, 8
BitLoop:
	lsl _Byte		; 1
	brcs B1			; 1 / 2

;;; Bit	HIGH	LOW	16MHz	20MHz
;;;  0 	350ns	800ns	6/13	7/16
;;;  1	700ns	600ns	11/10	14/12

B0:
	sbi LedPrt, LedIdx	; 2
	.if MCUclock == 16000000 ; 16MHz:4
	nops 4
	.elseif MCUclock == 20000000 ; 20MHz:5
	nops 5
        .elseif MCUclock == 8000000 ; 8MHz:2
        nops 1
        .else
	.endif

	cbi LedPrt, LedIdx	; 2
	.if MCUclock == 16000000 ; 16MHz:4
	nops 4
	.elseif MCUclock == 20000000 ; 20MHZ:7
	nops 7
        .elseif MCUclock == 8000000 ; 8MHz:2
        nops 2
        .else
        .error
	.endif

	rjmp BitDec		; 2

B1:
	sbi LedPrt, LedIdx	; 2
	.if MCUclock == 16000000 ; 16MHz:9
	nops 9
	.elseif MCUclock == 20000000 ; 20MHz:12
	nops 12
        .elseif MCUclock == 8000000 ; 8MHz:1
        nops 4
        .else
        .error
	.endif

	cbi LedPrt, LedIdx	; 2
	.if MCUclock == 16000000 ; 16MHz:2
	nops 2
	.elseif MCUclock == 20000000 ; 20MHZ:5
	nops 5
        .elseif MCUclock == 8000000 ; 8MHz:0
        nops 1
        .else
        .error
	.endif

BitDec:	dec _BitCnt		; 1
	brne BitLoop		; 2|1

	ret

;;; ========================================================================
;;; void Nop()
;;; ========================================================================
	.global Nop
Nop:	nop
	nop
	nop
	nop
	ret

;;; ========================================================================
;;; void Delay()
;;; ========================================================================
        .global Delay
Delay:

	push r16
	push r17
	push r18

	ldi r18, 0x01
	ldi r17, 0
	ldi r16, 0
DelayLoop:
	dec r16
	brne DelayLoop
	dec r17
	brne DelayLoop
	dec r18
	brne DelayLoop

	pop r18
	pop r17
	pop r16
	ret

;;; ========================================================================
;;; unsigned char Rnd()
;;; ========================================================================
	.global Rnd
	LL = 24
	LH = 25
	HL = 26
	HH = 27
	FB = 22			; feed back
	Tmp = 23
	Cnt = 20
Rnd:				; LFSR 32bit
	ldiw ZL, MemRnd
	ldd LL, Z+0
	ldd LH, Z+1
	ldd HL, Z+2
	ldd HH, Z+3

	ldi Cnt, 8
Rnd1:
	mov FB, LL		; tap 32

	bst LL, 2		; tap 30
	bld Tmp, 0
	eor FB, Tmp

	bst LL, 6		; tap 26
	bld Tmp, 0
	eor FB, Tmp

	bst LL, 7		; tap 25
	bld Tmp, 0
	eor FB, Tmp

	ror FB
	ror HH
	ror HL
	ror LH
	ror LL

	dec Cnt
	brne Rnd1

	std Z+0, LL
	std Z+1, LH
	std Z+2, HL
	std Z+3, HH

	;; 24 == LL
	ret

;;; ========================================================================
;;; EOF
;;; ========================================================================
