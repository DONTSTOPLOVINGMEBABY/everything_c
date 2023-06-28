.section .data 
string :
    .ascii "hello, world\n" 
string_end : 
    .equ len, string_end - string 
.section .text
.globl main 
main:
    ; First, call write(1, "hello world\n", 13) 
    movq $1, %rax       ; Write is system call #1
    movq $1, $rdi       ; Arg1 : stdout has descriptor 1 
    movq $string, %rsi  ; Arg2 : "hello, world\n" string 
    movq $len, %rdx     ; Arg3 : string length 
    syscall             ; Make the system call 

    ; Next, call _exit(0) 
    movq $60, %rax      ; _exit is system call 60 
    movq $0, %rdi       ; Arg1 : exit status is 0 
    syscall             ; Make the system call 
