#include <stdio.h>

/*HI*/
void function()
{
	char *quine = "#include <stdio.h>%c%c/*HI*/%cvoid function()%c{%c%cchar *quine = %c%s%c;%c%cprintf(quine, 10, 10, 10, 10, 10, 9, 34, quine, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10);%c}%c%cint main()%c{%c%c/*I am a main*/%c%cfunction();%c%creturn 0;%c}";
	printf(quine, 10, 10, 10, 10, 10, 9, 34, quine, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10);
}

int main()
{
	/*I am a main*/
	function();
	return 0;
}