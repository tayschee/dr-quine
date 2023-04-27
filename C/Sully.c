#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int i = 5;

#define S(x) #x
#define T(x) S(x)
#define MAIN(x) int main(){ --i; char kid_filename[] = "Sully_X.c"; kid_filename[6] = i + 48; char kid_execname[] = "Sully_X"; kid_execname[6] = i + 48; FILE *kid = fopen(kid_filename, "w"); if (kid == ((void *)0)) { return 1; } int ret = fprintf(kid, "#include <stdio.h>\n#include <unistd.h>\n#include <sys/wait.h>\n\nint i = %d;\n\n#define S(x) #x\n#define T(x) S(x)\n#define MAIN(x) %s\n\nMAIN(T(MAIN(x)))", i, x); fclose(kid); pid_t pid = fork(); if (pid == -1) { return 1; } else if (pid == 0) { execlp("gcc", "gcc", "-o", kid_execname, kid_filename, ((void *)0)); } else { wait(((void *)0)); } if (i != 0) { pid = fork(); if (pid == -1) { return 1; } else if (pid == 0) { execl(kid_execname, kid_execname, ((void *)0)); } else { wait(((void *)0)); } } return (ret < 0 ? 1 : 0); }

MAIN(T(MAIN(x)))