struct invNode {
	char* name;
	char* description;
	int value;
	struct invNode *next;
} 
goblin_loot = {"Necklace Of Teeth", "A necklace made of human teeth.   Perhaps this goblin was a dentist.", 6, NULL},
orc_loot = {"Orcish Romance Novel", "Ooooo... Steamy!", 13, NULL};

typedef struct invNode InvNode;

void addItem (int which, InvNode **inventory){
	if (which == 1){
		//add goblin_loot
		struct invNode *newNode = malloc(sizeof(struct invNode));
		newNode->*name = goblin_loot;
		newNode->*description = goblin_loot;
		newNode->value = goblin_loot;
		newNode->next = *inventory;
		*inventory = newNode;
	}else if (which == 2){
		//add orc_loot
		struct invNode *newNode = malloc(sizeof(struct invNode));
		newNode->*name = orc_loot;
		newNode->*description = orc_loot;
		newNode->value = orc_loot;
		newNode->next = *inventory;
		*inventory = newNode;
	}
	if (inventory == NULL){
		//inventory is empty, new item added to beginning
		struct invNode *newNode = malloc(sizeof(struct invNode));
		newNode->next = NULL;
	}
} // Question 3 Part I
int sellItem(int number, InvNode **inventory){
	struct InvNode *temp = *inventory, *prev;
	if (temp != NULL && temp->value == number) {
        *inventory = temp->next;
        free(temp);
        return number;
    }
	while (temp != NULL && temp->value != number) {
        prev = temp;
        temp = temp->next;
    }
	if (temp == NULL){
		return 0;
	}
	prev->next = temp->next;
	free(temp);
} // Question 3 Part II
void displayInventory(InvNode *inventory, int number);
