#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main(int argc, char const *argv[])
{	
	srand(time(NULL));
	int flag, i;
	int exit_flag = 0;
	char error[10] = {125, 128, 123, 129, 140, 122};
	while (exit_flag != 1) {
		scanf("%d", &flag);
		int random = rand() % 10; 
		random += 50;
		if (flag == 1) {
			Sleep(random);
			printf(RESET "\n\n");
			printf(RESET "Traffic. Stop. " RED "ERROR " RESET "detected.\n\n");
			getchar();
			Sleep(random);
			printf("Attempting to kill process. Attempt %d...\n\n", i);
			getchar();
			Sleep(random);
			printf("%c%c%c%s%s\n\n", 138, 140, 129, "Buffer Overflow.", error);
			Sleep(random);
			printf(CYAN);
			i++;
		}
		if (flag == 2){
			//printf("\n\n");
			for (int j = 0; j<10; j++) {
				printf(RED"ERROR ");
				Sleep(random);
				printf("WARNING ");
			}
			getchar();
		}
		if (flag == 3) {
			printf(RESET "Segmentation Fault (core dumped)\n");
		}
	}
	return 0;
}