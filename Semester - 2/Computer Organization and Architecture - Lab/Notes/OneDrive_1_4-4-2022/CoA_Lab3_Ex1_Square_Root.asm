;Copyright (C) 2022 Ramaguru Radhakrishnan
;Distributed under same license as rest of the program i.e. GPL v2 or later.
;See COPYING file for license text.

; 20CYS112    - Computer Organization and Architecture
; Lab 2       - Introduction to 8085 Microprocessor
; Date        - 04.04.2022
; Description - Square Root of a Number

jmp start                 ; Jump to the place where the label "start"

;code
start: nop                ; <LABEL:> Instruction Operands 


mvi D,01 ; Load the memory address where the list starts
mvi E,01      ; move the content from the memory to B register
lda 0006      ; Number of value to compare
loop: sub D
      jz skip
      inr D
      inr D
      inr E
      jmp loop

skip: mov A, E
      sta 0008

hlt
