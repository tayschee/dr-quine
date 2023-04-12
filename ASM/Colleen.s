extern printf

SECTION .data
	msg db "test %d", 10

SECTION .text
    global main

;FOR THE QUINE !
main:
	mov rdi, msg
	mov rsi, 12
	push rbx		;reason here: https://stackoverflow.com/questions/66298186/understanding-the-printf-function-in-assembly-nasm-x86-i-dont-know-why-this
	call printf
	pop rbx
	jmp check_error

check_error:
	cmp rax, 0
	jg error
	mov rax, 0
	ret

error:
	ret