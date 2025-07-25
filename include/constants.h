#ifndef CONSTANTS_H
#define CONSTANTS_H

#ifdef DEBUG
#define TEST_NUMBER 100
#endif

#define MAX_PLAYERS 10 //..................max players
#define MAX_NAME_LENGTH 32 //..............max name length
#define NUM_DICE_SIDES 6 //................dice sides
#define MAX_GAMES 100 //...................max games

#define DICE_ID_EASY 0 //..................easy dice
#define DICE_ID_MEDIUM 1 //................medium dice
#define DICE_ID_HARD 2 //..................hard dice
#define EASY_DICE_NUM 6 //.................easy dice quantity
#define MEDIUM_DICE_NUM 4 //...............medium dice quantity
#define HARD_DICE_NUM 3 //.................hard dice quantity
#define MAX_DICE_NUM 13 //.................max dice quantity

#define BRAIN 0 //.........................brain
#define FOOTSTEPS 1 //.....................footsteps
#define SHOTGUN 2 //.......................shotgun

#define BRAINS_TO_WIN 13 //................brains to win
#define MAX_SHOTGUNS 3 //..................max shotguns

#define MAX_INPUT_LENGTH 256 //............max input length

#define TEXTGREEN "\033[0;32m" //..........green text
#define TEXTRED "\033[0;31m" //............red text
#define TEXTRESET "\033[0m" //.............reset text

#endif // CONSTANTS_H
