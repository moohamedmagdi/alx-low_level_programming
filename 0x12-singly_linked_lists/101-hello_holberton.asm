section .text Hello, Holberton
	extern printf
	global main

main:
	mov		edi, msg
	mov		eax, 0
	call printf


section .data
msg db 'Hello, Holberton', 0xa, 0	;printed
len equ $ - msg				;len
