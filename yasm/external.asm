section .data
NEWLINE db 10


section .bss



section .text

global console_print
console_print:
    mov rax, 1
    mov rdi, 1
    syscall
    mov rax, 1
    mov rsi, NEWLINE
    mov rdx, 1
    syscall
ret
