#include <stdio.h>

/*
	HI
*/
int quine()
{
	char *quine = "#include <stdio.h>%c%c/*%c%cHI%c*/%cint quine()%c{%c%cchar *quine = %c%s%c;%c%creturn (printf(quine, 10, 10, 10, 9, 10, 10, 10, 10, 9, 34, quine, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10));%c}%c%cint main()%c{%c%c/*%c%c%cI am a main%c%c*/%c%creturn (quine() < 0 ? 1 : 0);%c}";
	return (printf(quine, 10, 10, 10, 9, 10, 10, 10, 10, 9, 34, quine, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10));
}

int main()
{
	/*
		I am a main
	*/
	return (quine() < 0 ? 1 : 0);
}