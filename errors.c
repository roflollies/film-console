// Prints weird looking error messages.
// Type 1-5 to do stuff.

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

static void clrscr()
{
    system("@cls||clear");
}

int main(int argc, char const *argv[])
{	
	srand(time(NULL));
	int flag, i;
	int exit_flag = 0;
	char error[100];
	char error2[100];
	while (exit_flag != 1) {
		scanf("%d", &flag);
		int random = rand() % 100; 
		random += 80;
		for (int j = 0; j < 100; j++) {
			int char_rand = rand() % 140;
			int char_rand2 = rand() % 140;		
			error[j] = char_rand;
			error2[j] = char_rand2;
		}
		if (flag == 1) {
			Sleep(random);
			printf(RESET "\n");
			printf(RED "ERROR " RESET "detected: " RESET "No valid network TRAFFIC. \n" RESET);
			getchar();
			Sleep(random);
			printf("Attempting to kill process: Attempt %d...\n", i);
			getchar();
			Sleep(random);
			printf(RED "%s%s%s\n" RESET, error2, "__buffer overflow__", error);
			Sleep(random);
			printf(CYAN);
			i++;
		}
		if (flag == 2){
			Sleep(random);
			printf(RESET "\n");
			printf(RED "ERROR " RESET "detected: " RESET "Memory Address Invalid. \n" RESET);
			getchar();
			Sleep(random);
			printf("Attempting to kill process: Attempt %d...\n", i);
			getchar();
			Sleep(random);
			printf(RED "%s%s%s\n" RESET, error2, "__buffer overflow__", error);
			Sleep(random);
			printf(CYAN);
			i++;
		}
		if (flag == 3) {
			printf(RESET "Segmentation Fault (core dumped)\n");
		}
		if (flag == 4) {
			printf("main.c:42: ");
			printf(RED "fatal:" RESET);
			printf("Symbol referencing errors. No output written to a.out\n");
			Sleep(50);
			printf("test.c:10:8:" RED "warning:" RESET "assignment from incompatible pointer type [enabled by default]\n fp = fopen(\"testFile\", mode);\n\t\t^\n");
		    Sleep(10);
		    printf("ai.c:32: " RED "fatal:" RESET "compilation error\n\n");
		    printf("ai.c:12: " MAGENTA "warning:" RESET "traffic unavailable\n\n");
		}
		if (flag == 5) {
			Sleep(random);
			printf(RESET "\n");
			printf(RED "ERROR " RESET "detected: Allocation of array pointers failed. \n" RESET);
			getchar();
			Sleep(random);
			printf("Attempting to kill process: Attempt %d...\n", i);
			getchar();
			Sleep(random);
			printf(RED "%s%s%s\n" RESET, error2, "__buffer overflow__", error);
			Sleep(random);
			printf(CYAN);
			i++;
		}
		if (flag == 6) {
			clrscr();
		}
	}
	return 0;
}
