	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 5
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #80
	.cfi_def_cfa_offset 80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	adrp	x1, l_.str.1@PAGE
	add	x1, x1, l_.str.1@PAGEOFF
	bl	_fopen
	stur	x0, [x29, #-16]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	adrp	x1, l_.str.3@PAGE
	add	x1, x1, l_.str.3@PAGEOFF
	bl	_fopen
	stur	x0, [x29, #-24]
	ldur	x0, [x29, #-16]
	mov	x9, sp
	adrp	x8, _a@PAGE
	str	x8, [sp, #32]                   ; 8-byte Folded Spill
	adrp	x8, _a@PAGE
	add	x8, x8, _a@PAGEOFF
	str	x8, [x9]
	adrp	x8, _b@PAGE
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	adrp	x8, _b@PAGE
	add	x8, x8, _b@PAGEOFF
	str	x8, [x9, #8]
	adrp	x1, l_.str.4@PAGE
	add	x1, x1, l_.str.4@PAGEOFF
	bl	_fscanf
	ldr	x10, [sp, #24]                  ; 8-byte Folded Reload
	ldr	x8, [sp, #32]                   ; 8-byte Folded Reload
	ldr	w9, [x8, _a@PAGEOFF]
	ldr	w10, [x10, _b@PAGEOFF]
	mul	w9, w9, w10
	adrp	x10, _answer@PAGE
	str	w9, [x10, _answer@PAGEOFF]
	ldr	w8, [x8, _a@PAGEOFF]
	mov	w10, #2
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	subs	w8, w8, #1
	cset	w8, ne
	tbnz	w8, #0, LBB0_3
	b	LBB0_1
LBB0_1:
	adrp	x8, _b@PAGE
	ldr	w8, [x8, _b@PAGEOFF]
	mov	w10, #2
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	subs	w8, w8, #1
	cset	w8, ne
	tbnz	w8, #0, LBB0_3
	b	LBB0_2
LBB0_2:
	adrp	x9, _answer@PAGE
	ldr	w8, [x9, _answer@PAGEOFF]
	subs	w8, w8, #1
	str	w8, [x9, _answer@PAGEOFF]
	b	LBB0_3
LBB0_3:
	adrp	x8, _answer@PAGE
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	ldr	w9, [x8, _answer@PAGEOFF]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.5@PAGE
	add	x0, x0, l_.str.5@PAGEOFF
	bl	_printf
	ldr	x8, [sp, #16]                   ; 8-byte Folded Reload
	ldur	x0, [x29, #-24]
	ldr	w9, [x8, _answer@PAGEOFF]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x1, l_.str.6@PAGE
	add	x1, x1, l_.str.6@PAGEOFF
	bl	_fprintf
	ldur	x0, [x29, #-16]
	bl	_fclose
	ldur	x0, [x29, #-24]
	bl	_fclose
	mov	w0, #0
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	add	sp, sp, #80
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_a                              ; @a
.zerofill __DATA,__common,_a,4,2
	.globl	_b                              ; @b
.zerofill __DATA,__common,_b,4,2
	.globl	_c                              ; @c
.zerofill __DATA,__common,_c,4,2
	.globl	_d                              ; @d
.zerofill __DATA,__common,_d,4,2
	.globl	_e                              ; @e
.zerofill __DATA,__common,_e,4,2
	.globl	_o                              ; @o
.zerofill __DATA,__common,_o,4,2
	.globl	_m                              ; @m
.zerofill __DATA,__common,_m,4,2
	.section	__DATA,__data
	.globl	_answer                         ; @answer
	.p2align	2, 0x0
_answer:
	.long	1                               ; 0x1

	.globl	_answer1                        ; @answer1
.zerofill __DATA,__common,_answer1,4,2
	.globl	_answer2                        ; @answer2
.zerofill __DATA,__common,_answer2,4,2
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"nortin.txt"

l_.str.1:                               ; @.str.1
	.asciz	"r"

l_.str.2:                               ; @.str.2
	.asciz	"nortout.txt"

l_.str.3:                               ; @.str.3
	.asciz	"w"

l_.str.4:                               ; @.str.4
	.asciz	"%d %d"

l_.str.5:                               ; @.str.5
	.asciz	"%d"

l_.str.6:                               ; @.str.6
	.asciz	"%d\n"

.subsections_via_symbols
