section .data
stuff db "Hello, Assembly",10
myInt db 49 
NEWLINE db 10

section .bss
extern console_print

section .text

global assemblyhi
assemblyhi:
	mov rsi, stuff
	mov rdx, 16
	call console_print
ret
;   mov rax, 60
;	mov rdi, 0
;	syscall

printInt:
    mov rsi, myInt
    mov rdx, 2
    call console_print 
ret

global superFunc
superFunc:
    mov byte [myInt], dil
    add byte [myInt], 48
    mov rsi, myInt
    mov rdx, 1
    call console_print
    mov rsi, NEWLINE
    call console_print
ret

global foobar 
foobar:
    call assemblyhi
    call printInt
    ret
