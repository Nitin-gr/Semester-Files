;Copyright (C) 2022 Ramaguru Radhakrishnan
;Distributed under same license as rest of the program i.e. GPL v2 or later.
;See COPYING file for license text.

; 20CYS112    - Computer Organization and Architecture
; Lab 1       - Introduction to 8085 Microprocessor
; Date        - 21.03.2022
; Description - Multiplication

jmp start

;data


;code
start:	nop

	;Sub without carry
	mvi b, 9
	mvi c, 3	

loop1:	add b
	dcr c
	jnz loop1

	hlt
