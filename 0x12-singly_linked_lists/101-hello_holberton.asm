section .txt
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

SECTION .txt
extern printf
global main
main:
mov esi, msg
mov edi, fmt
mov eax, 0
call printf

mov eax, 0
ret