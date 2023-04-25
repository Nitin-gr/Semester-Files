;Copyright (C) 2022 Ramaguru Radhakrishnan
;Distributed under same license as rest of the program i.e. GPL v2 or later.
;See COPYING file for license text.

; 20CYS112    - Computer Organization and Architecture
; Lab 1       - Introduction to 8085 Microprocessor
; Date        - 21.03.2022
; Description - Addition with and without carry
	
jmp start

;data


;code
start:	nop

	;Add without carry
	mvi a, 1
	mvi b, 3
	add b	;04

	;Add with carry
	mvi a, 240
	mvi b, 46
	stc
	adc b	;11F

	hlt
