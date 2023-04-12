#include <stdio.h>

#define S(x) #x
#define T(x) S(x)
#define MAIN(x) int main(){ FILE *kid = fopen("Grace_kid.c", "w"); if (kid == 0) return 1; fputs("#include <stdio.h>\n\n#define S(x) #x\n#define T(x) S(x)\n#define MAIN(x) " x "\n\nMAIN(T(MAIN(x)))\n/*No main required*/", kid); fclose(kid); return 0;}

MAIN(T(MAIN(x)))
/*No main required*/