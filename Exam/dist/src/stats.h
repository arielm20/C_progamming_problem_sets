/** 
   * @file course.h
   * @author Ariel Motsenyat
   * @date 08/07/2021
   * @brief header file for stats.c that defines the statblock and player structs and the displayStats function 
   */
#ifndef STATS_HEADER
#define STATS_HEADER 1
#include"inventory.c"

struct statblock {
	/** \brief a description of the statblock struct
   * This struct holds statistics about the player and any creatures found in the game
   */
	char *NAME; /**<name field is char datatype that holds the name of the player or creature>*/
	int MAX_HP; /**<MAX_HP field is an int datatype that holds the MAX_HP of the player or creature>*/
	int HP; /**<HP field is an int datatype that holds the HP of the player or creature>*/
	int XP; /**<XP field is an int datatype that holds the XP of the player or creature>*/
	int ATK; /**<ATK field is an int datatype that holds the attack power of the player or creature>*/
	int DEF; /**<DEF field is an int datatype that holds the deffense power of the player or creature>*/
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
