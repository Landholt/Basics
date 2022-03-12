section .data

TRUTH equ 1
nor_msg db "Number is not greater than 13 or less than 8"
nor_msglen dd 44
or_msg db "Number is greater than 13 or less than 8"
or_msglen dd 40
and_msg db "Number is positive and divisible by 3"


section .bss

extern console_print


section .text

global yasm_cmov_or_ex
yasm_cmov_or_ex:
    mov rsi, nor_msg
    mov edx, dword [nor_msglen]
    mov rcx, TRUTH
    mov r10, or_msg
    ;;;;
    xor r9, r9
    xor r14, r14
    ;;;;
    cmp rdi, 8
    cmovl r9, rcx
    cmp rdi, 13
    cmova r14, rcx
    or r9, r14
    cmp r9, rcx
    cmove rsi, r10
    cmove edx, dword [or_msglen]
    call console_print
ret
