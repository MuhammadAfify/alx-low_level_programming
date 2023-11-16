extern printf

section .text
   global main

main:
   mov rsi,msg
   mov rax,0
   call printf

section .data
   msg: db "Hello, Holberton", 0xa, 0

