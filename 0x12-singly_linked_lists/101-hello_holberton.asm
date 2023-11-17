section .data
hello_msg db `Hello, Holberton`, 10, 0

       global    main
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret

; Exit the program
    mov rax, 60        
    xor edi, edi        
    syscall 

format: db `Hello, Holberton\n`,0



