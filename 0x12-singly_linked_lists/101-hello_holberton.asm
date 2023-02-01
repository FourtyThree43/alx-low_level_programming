;----------------------------------------------------------------------------
; 64-bit Hello, Holberton then a new line, in assembly, using printf() from C
;
; Equivalent to:
;       #include <stdio.h>
;       char msg[] = "Hello, Holberton";
;       int main() {
;               printf("%s\n", msg);
;               return 0;
;       }
;
; Demonstrates basic text output using C printf(), in 64-bit mode.
;----------------------------------------
; Assemble in 64-bit:   nasm -f elf64 101-hello_holberton.asm
;
;   && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
;       
; run:          ./hello
; output is:    Hello Holberton
;----------------------------------------
; 2023-02-01 -FourtyThree43.
;----------------------------------------------------------------------------
        SECTION .data   ; Data section, initialized variables
msg:    db "Hello, Holberton", 0 ; C string needs 0
fmt:    db "%s", 10, 0  ; The printf format, "\n",'0'

        SECTION .text   ; Code section.
        extern printf   ; the C function, to be called

        global main     ; the standard gcc entry point
main:                   ; the program label for the entry point
        mov esi, msg    ; 64-bit ABI passing order starts w/ edi, esi, ...
        mov edi, fmt    ;
        mov eax, 0      ; printf is varargs, so EAX counts # of non-integer arguments being passed
        call printf

        mov ebx, 0      ; normal-exit code
        mov eax, 1      ; process-termination service
        int 0x80        ; linux kernel service
        .section ".note.GNU-stack","",@progbits
;----------------------------------------------------------------------------