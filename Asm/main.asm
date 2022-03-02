section .data
stuff db "Hello, World",10

section .text
global assemblyhi

assemblyhi:
	mov rax, 1
	mov rdi, 1
	mov rsi, stuff
	mov rdx, 14
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
