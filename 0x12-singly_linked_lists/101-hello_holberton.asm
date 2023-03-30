section .data
hello db 'Hello, Helberton', 0x0a
fmt db '%s', 0x0a, 0x00

section .text
global main

main:
push rbp
mov rbp, rsp

; Call printf
mov rdi, fmt
mov rsi, hello
mov rax, 0
call printf

; Exit
mov eax, 0
leave
ret
