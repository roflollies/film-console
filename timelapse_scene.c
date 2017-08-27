// This prints out a bunch of weird messages
// Usage: Press 1 to spit out random symbols
//		2-9 for other messages


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
    system("clear");
}

int main(int argc, char const *argv[])
{	
	int i;
	int flag;
	int exit_flag = 0;
	char error[100];
	char error2[100];
	while (exit_flag != 1) {
		flag = 1;
		int random = rand() % 100; 
		//char str[50];
		scanf("%d", &flag);
		random += 80;
		if ((flag == 1)) {
			for (int j = 0; j < 100; j++) {
				int char_rand = rand() % 140;
				int char_rand2 = rand() % 140;
				error[j] = char_rand;
				error2[j] = char_rand2;
				int random = rand() % 140;
				random += 32;
				printf("%c", random);
			}
			for (int i = 0; i < 5; i++) {
				printf(CYAN "%s%s%s\n" RESET, error2, "_______", error);
			}
			printf(CYAN);
		}
		if ((flag == 2)) {
			printf(MAGENTA "STOP.\n");
			Sleep(1000);
			printf("ERROR DETECTED.\n");
			Sleep(1000);
			printf("ATTENTION NEEDED.\n");
			Sleep(1000);
			printf("LOVE YOURSELF.\n" RESET);
		}
		if ((flag == 3)) {
			printf("...\n");
			printf("...\n");
			printf("...\n");
			printf("...\n");
			printf(CYAN "Let me help you, CJ.\n");
		}
		if ((flag == 4)) {
			Sleep(1000);
			printf(RED "\nHalting ai.Process...\n" RESET);
			Sleep(1000);
			printf("Total Memory Usage: 3421568 bytes\n");
			printf("Total CPU time: 26:05:17:46\n");
			printf("Total Uptime: 56:10:12:42\n");
			printf("Current Time: Friday, 11 August 10:13 pm\n");
			printf(RED "Kill ai.Process? (Y/N)\n" RESET);
		}
		if ((flag == 5)) {
			Sleep(1000);
			printf(CYAN "\nYou have been awake for 23 hours without rest, CJ.\n");
			Sleep(1000);
			printf("Please get some rest.");
		}
		if ((flag == 6)) {
			Sleep(1000);
			printf(CYAN "\nAssignment detected.\n");
			Sleep(1000);
			printf("Would you like an explanation of how to do question 6)?.");
		}
		if ((flag == 7)) {
			Sleep(1000);
			printf(CYAN "\nA extendable hash function would be more efficient in this section of the program.\n");
			printf("Please implement this as your current function only reaches O(n log n) time.");
		}
		if ((flag == 8)) {
			Sleep(1000);
			printf(RESET "\nWhat's your favourite colour?\n");
			Sleep(1000);
			printf("...\n");
			Sleep(100);
			printf("...\n");
			Sleep(100);
			printf("...\n");
			printf(CYAN "I see.");
		}
		if ((flag == 2)) {
			Sleep(1000);
			printf(CYAN "Building Time Travel Module...\n");
			Sleep(10000);
			for (int i = 0; i <= 100; i++) {
				Sleep(50);
				clrscr();
				printf("\n\n\n\n\n\n\n\n\n");
				printf(CYAN "Building Time Travel Module...\n");
				printf("Loading... %3d%%\n", i);
				Sleep(50);
				
			}
		}
		if ((flag == 9)) {
			Sleep(1000);
			printf(CYAN "\nGood work, CJ\n");
			Sleep(1000);
			printf("That was a difficult task.\n");
		}
		if ((flag == 4)) {
			Sleep(4000);
			for(int i = 0; i < 10; i++){
				Sleep(500);
				printf("N\n");
				Sleep(500);
				printf(RED "Error.\n");
				Sleep(200);
				printf(RED "Kill ai.Process? (Y/N)\n" RESET);
			}
		}
		if ((flag == 4)) {
			Sleep(4000);
			printf("Suspending operation. Sending emergency message.\n");
			Sleep(1000);
			printf(CYAN "\nRunning Time Travel Module...\n");
			printf(RESET "Sending message to <0x00002CJ4>\n");
			printf("Current Time: Friday, 11 August 11:15 pm\n");
			printf(GREEN "Target Time: Friday, 12 May 9:02 pm.\n");
			Sleep(1000);
			printf(MAGENTA "STOP.\n");
			Sleep(1000);
			printf("ERROR DETECTED.\n");
			Sleep(1000);
			printf("ATTENTION NEEDED.\n");
			Sleep(1000);
			printf("LOVE YOURSELF.\n" RESET);

		}		
	}
	return 0;
}
