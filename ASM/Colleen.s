extern printf

SECTION .data
	quine db "extern printf%2$c%2$cSECTION .data%2$c%1$cquine db %3$c%4$s%3$c%2$c%2$cSECTION .text%2$c%1$cglobal main%2$c%2$c;GOD SAVE THE QUINE !%2$cmain:%2$c%1$cmov rdi, quine%2$c%1$cmov rsi, 9%2$c%1$cmov rdx, 10%2$c%1$cmov rcx, 34%2$c%1$cmov r8, quine%2$c%1$cpush rbx	;reason here: https://stackoverflow.com/questions/66298186/understanding-the-printf-function-in-assembly-nasm-x86-i-dont-know-why-this%2$c%1$ccall printf%2$c%1$cpop rbx%2$c%1$cjmp check_error%2$c%2$ccheck_error:%2$c%1$ccmp rax, 0%2$c%1$cjl error%2$c%1$cmov rax, 0%2$c%1$cret%2$c%2$cerror:%2$c%1$cret"

SECTION .text
	global main

;GOD SAVE THE QUINE !
main:
	mov rdi, quine
	mov rsi, 9
	mov rdx, 10
	mov rcx, 34
	mov r8, quine
	push rbx	;reason here: https://stackoverflow.com/questions/66298186/understanding-the-printf-function-in-assembly-nasm-x86-i-dont-know-why-this
	call printf
	pop rbx
	jmp check_error

check_error:
	cmp rax, 0
	jl error
	mov rax, 0
	ret

error:
	ret