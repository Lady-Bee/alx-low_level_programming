section .data
    hello_msg db "Hello, Holberton", 10, 0  ; Message to be printed, 10 is ASCII for newline

section .text
    global main

    extern printf   ; Declare printf function from C library

main:
    mov rdi, hello_msg  ; First argument: address of the string
    call printf         ; Call printf function

    ; Exit the program
    mov rax, 60         ; System call number for exit (60 for x86-64)
    xor edi, edi        ; Exit code 0
    syscall             ; Invoke syscall to exit

