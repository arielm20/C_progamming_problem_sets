#include<stdio.h>
#include"utils.h"
#include"stats.h"

void displayStats(Player *tux) {
	printf("\n");
	displayImage("images/tux.ascii");
	printf(">><<>><<>><<>><<\n");
	printf("LVL : %d\n", tux->level);
	printf("HP : %d / %d\n", tux->stats.HP, tux->stats.MAX_HP);
	printf("XP : %d / 100\n", tux->stats.XP);
	printf("ATK : %d\n", tux->stats.ATK);
	printf("DEF : %d\n", tux->stats.DEF);
	printf(">><<>><<>><<>><<\n");
	printf("Gold : %d\n", tux->gold);
	printf("Inventory : \n");
//	printf("%p", tux->inventory);
	displayInventory(tux->inventory, 0);
}
