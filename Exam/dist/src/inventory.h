/** 
   * @file course.h
   * @author Ariel Motsenyat
   * @date 08/07/2021
   * @brief header file for inventory.c that defines the invNode struct and the accompying functions
   */

struct invNode {
	/** \brief a description of the invNode struct
   * This struct defines the singly linked list that is used to build the inventory in the game
   */
	char* name; /**<name field is a char datatype that holds the name of the inventory item>*/
	char* description; /**<description field is a char datatype that holds the description of the inventory item>*/
	int value; /**<value field is an int datatype that holds the coin value of the inventory item>*/
	struct invNode *next; /**<value field is struct datatype that defines the next node in the singly linked list>*/
} 
goblin_loot = {"Necklace Of Teeth", "A necklace made of human teeth.   Perhaps this goblin was a dentist.", 6, NULL},
orc_loot = {"Orcish Romance Novel", "Ooooo... Steamy!", 13, NULL};

typedef struct invNode InvNode;
/**  \brief adds an item to the players inventory
   * @param which int type; determines which item will be added from the two that are available, 1 goblin_loot is added, 2 orc_loot is added
   * @param inventory InvNode type; the first node of the singly linked list where the new item will be added
   * @return the pointer to the first node is an implicit return value
   * @see struct invNode , goblin_loot , orc_loot
   * @note inventory parameter is a double pointer of the first node of the inventory as *inventory may change in the function.
   */
void addItem (int which, InvNode **inventory);// Question 3 Part I
/**  \brief deletes an item from the players inventory and returns value of the item being sold
   * @param number index of the item being removed from the inventory
   * @param inventory InvNode type; address to the pointer of the first node of the singly linked list
   * @return the value of the item being sold
   * @see struct invNode , goblin_loot , orc_loot
   * @note inventory parameter is a double pointer of the first node of the inventory as *inventory may change in the function.
   */
int sellItem(int number, InvNode **inventory);// Question 3 Part II
/**  \brief displays the inventory
   * @param inventory pointer to the head of the singly linked list 
   * @param number index of the node being displayed
   * @return N/A as this is a void function
   * @see struct invNode , goblin_loot , orc_loot
   */
void displayInventory(InvNode *inventory, int number);
