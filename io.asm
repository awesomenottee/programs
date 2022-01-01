;
; file io.asm
; Take a input and print it
;

section .text
	global _start
_start:
	mov eax, 4
	mov ecx, msg1
	mov edx, msg1.len
	int 80H

	mov eax, 3
	mov ecx, num
	mov edx, 6
	int 80H

	mov eax, 4
	mov ecx, msg2
	mov edx, msg2.len
	int 80H

	mov eax, 4
	mov ecx, num
	mov edx, 6
	int 80H

	mov ebx, 0
	mov eax, 1
	int 80H

section .data
	msg1 db 'Enter a number: '
	msg1.len equ $- msg1

	msg2 db 0AH, 'Entered number: '
	msg2.len equ $- msg2

section .bss
	num resb 6
