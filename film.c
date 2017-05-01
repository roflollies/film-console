#include <stdio.h>
#include <windows.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main(int argc, char const *argv[])
{	
	int flag;
	int exit_flag = 0;
	while (exit_flag != 1) {
		scanf("%d", &flag);
		if (flag == 1) {
			printf("main.c:42: ");
			printf(RED "fatal:" RESET);
			printf("Symbol referencing errors. No output written to a.out\n");
			Sleep(50);
			printf("test.c:10:8:" RED "warning:" RESET "assignment from incompatible pointer type [enabled by default]\n fp = fopen(\"testFile\", mode);\n\t\t^\n");
		    Sleep(10);
		    printf("ai.c:32: " RED "fatal:" RESET "compilation error\n\n");
		    printf("ai.c:12: " MAGENTA "warning:" RESET "traffic unavailable\n\n");
		}
		else if (flag == 2) {
			printf(CYAN "Hey C1. How are you today?\n\n");
			printf("You have a lovely voice, C1\n\n");
			printf(RESET);
		}
	}
	return 0;
}