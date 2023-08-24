section .data
hello db "Hello, Holberton", 0
format db "%s", 10, 0

section .text
global main

main:
mov rdi, format
mov rsi, hello
xor rax, rax
call printf

mov rax, 60         ; syscall number for exit
xor rdi, rdi        ; exit status 0
syscall
