#ifndef STATS_HEADER
#define STATS_HEADER 1
#include"inventory.c"

struct statblock {
	char *NAME;
	int MAX_HP;
	int HP;
	int XP;
	int ATK;
	int DEF;
}
goblin_init = {"goblin", 20, 20, 20, 8, 6},
orc_init = {"orc", 50, 50, 50, 15, 8},
dragon_init = {"dragon", 250, 250, 250, 35, 28};

typedef struct statblock Statblock;

struct player {
	int level;
	int gold;
	InvNode *inventory;
	Statblock stats;
} player_init = {1, 50, NULL, {"Tux", 25, 25, 0, 10, 5}};

typedef struct player Player;

void displayStats(Player *tux);

#endif
