section .data
	hello db 'Hello, Holberton',0
	format db "%s",0

section .text
global _start

_start:
	; Calling printf
	lea rdi, format
	lea rsi, hello
	call printf


	; Calling exit
	mov rdi, 0
	call exit
