#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
	int flag;
	int exit_flag = 0;
	while (exit_flag != 1) {
		scanf("%d", &flag);
		int random = rand() % 100; 
		char str[50];
		scanf("%s", &str);
		random += 80;
		if (strcmp("compile",  str) == 0) {
			printf(CYAN "Attempting to compile...\n" RESET);
			for (int i = 0; i < 10; i++) {
				Sleep(600);
				printf("...\n");	
			}
			Sleep(50);
			printf(GREEN "Compilation Successful!\n");
			printf(RESET);
			Sleep(2000);
			clrscr();
			Sleep(800);
			//for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 1000000; j++) {
				int random = rand() % 140;
				random += 32;
				printf("%c", random);
			}
			//}
			//clrscr();
			Sleep(2000);
			printf(CYAN "\nHello.\n");
		}
	}
	return 0;
}