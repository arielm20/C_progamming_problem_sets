#include"inventory.h"
#include<stdlib.h>
#include<string.h>

void addItem (int which, InvNode **inventory){
	if (which == 1){
		//add goblin_loot
		struct invNode *goblin_loot = malloc(sizeof(struct invNode));
		goblin_loot->name = goblin_loot->name;
		goblin_loot->description = goblin_loot->description;
		goblin_loot->value = goblin_loot->value;
		goblin_loot->next = *inventory;
		*inventory = goblin_loot;
		if (inventory == NULL){
			//inventory is empty, new item added to beginning
			goblin_loot->next = NULL;
		}
	}else if (which == 2){
		//add orc_loot
		struct invNode *orc_loot = malloc(sizeof(struct invNode));
		orc_loot->name = orc_loot->name;
		orc_loot->description = orc_loot->description;
		orc_loot->value = orc_loot->value;
		orc_loot->next = *inventory;
		*inventory = orc_loot;
		if (inventory == NULL){
			//inventory is empty, new item added to beginning
			orc_loot->next = NULL;
		}
	}
	
}

int sellItem(int number, InvNode **inventory){
	if (*inventory == NULL){
		return 0;
	}
	struct invNode* temp = *inventory;
	if (number == 0){
		*inventory = temp->next;
		free(temp);
	}
	return temp->value;
	for (int i=0; temp!=NULL && i<number-1; i++){
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL){
		return 0;
	}
	struct invNode *next = temp->next->next;
	free(temp->next);
	temp->next = next;
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
