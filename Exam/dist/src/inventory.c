#include"inventory.h"
#include<stdlib.h>
#include<string.h>

void addItem (int which, InvNode **inventory){
	// QUESTION 3 PART I GOES HERE!
}

int sellItem(int number, InvNode **inventory){
	// QUESTION 3 PART II GOES HERE!
}

void displayInventory(InvNode *inventory, int number){
	if (inventory == NULL) {
		printf("*** Inventory Empty ***\n");
		return;
	}
	printf("╔══╤══════════════════════╤════════╗\n");
	printf("║%2.2d|%22.22s│%2d gold ║\n", number, inventory->name, inventory->value);
	printf("╟──┴──────────────────────┴────────╢\n");
	int length = strlen(inventory->description);
	int i = 0;
	while (i < length) {
		printf("║%34.34s║\n", (inventory->description + i));
		i += 34;
	}
	printf("╚══════════════════════════════════╝\n");
	if (inventory->next != NULL) {
		displayInventory(inventory->next, number + 1);
	}	
}
