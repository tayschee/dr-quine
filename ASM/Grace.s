%define S(x) x
%define T(x) S(x)

SECTION .text
    global main

;FOR THE QUINE !
main:
	mov rdi,quine
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
	retsection main QUINE "extern printf", 10, 10, "%define S(x) x", 10, "%define T(x) S(x)", 10, "%define QUINE"
%endmacro