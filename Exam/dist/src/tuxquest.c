#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include"stats.c"
#include"utils.c"
#include"locations.c"


enum Option{travel,status,quit};

typedef struct creature Creature;

enum Option readOption (char resp[50]) {
	if (strncmp(resp, "travel", 7) == 0) {
		return travel;
	} else if (strncmp(resp, "status", 7) == 0) {
		return status;
	} else if (strncmp(resp, "quit", 5) == 0) {
		return quit;
	} else {
		return -1;
	}
}

int main() {
	printf(">>> Welcome to TuxQuest <<<\n");
	bool gameWon = false;
	char response[50];
	int resp;
	Player tux = player_init;
	while (!gameWon) {
		// get Scenario
		printf ("Your options are:\n");
		printf ("- travel\n");
		printf ("- status\n");
		printf ("- quit\n");
		printf (">> ");
		scanf("%50s", response);
		printf("\n");
		resp = readOption(response);
		switch (resp) {
			case travel :
				if (travelDispatch(&tux)) {
					printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
					printf("Congratulations!  Tux has defeated the dragon!\n");
					printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
					printf("\"The treasure is mine!\" Cries Tux gleefully.\n");	
					displayImage("images/winnar.ascii");	
					printf("But all the herring had gone bad because the\n");
					printf("chest wasn't refrigerated!\n");
					displayImage("images/herring.ascii");
					printf(">>> Thank you for playing TuxQuest <<<\n");
					exit(0);
				}
				break;
			case status :
				displayStats(&tux);
				break;
			case quit :
				return 0;
			default : 
				printf("Command Not Recognized!\n"); 
				break; 
		}
		
		// execute command	
	}
}
