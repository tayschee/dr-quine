#include <stdio.h>

/*
	HI
*/
int quine()
{
	char *quine = "#include <stdio.h>%2$c%2$c/*%2$c%1$cHI%2$c*/%2$cint quine()%2$c{%2$c%1$cchar *quine = %3$c%4$s%3$c;%2$c%1$creturn (printf(quine, 9, 10, 34, quine));%2$c}%2$c%2$cint main()%2$c{%2$c%1$c/*%2$c%1$c%1$cI am a main%2$c%1$c*/%2$c%1$creturn (quine() < 0 ? 1 : 0);%2$c}";
	return (printf(quine, 9, 10, 34, quine));
}

int main()
{
	/*
		I am a main
	*/
	return (quine() < 0 ? 1 : 0);
}