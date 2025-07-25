#include "constants.h"
#include "players.h"
#include "cup.h"
#include "random.h"
#include <stdbool.h>
#include <stdio.h>

#ifndef GAME_H
#define GAME_H

void reset_game(); //zero out game variables
void Greetings(); //greet user

//public variables:
extern int inputed_number_of_players;
extern int inputed_number_of_games;
enum dice_sides{null,shotgun,footsteps,brain};
extern enum dice_sides cup[NUM_DICE_SIDES]; //

/*
struct Game
{
    int number_of_players;
    player_t players[number_of_players]; //this
    int number_of_games;
};

//typedef struct
//{
//    char name[MAX_NAME_LENGTH]
//    int turn_order;
//    int score;


//}player_t;

//enum player_name
//{
//    ADAM
//}
//enum dice_sides
//{

//}
//enum dice_difficulty
//{
    
//}

// brain foots shotg i can use these 3 char []
//dice_easy[DICE_SIDES]["brain", "brain", "brain", "foots", "foots", "shotg"]; 
//dice_medium[DICE_SIDES]["brain", "brain", "foots", "foots", "shotg", "shotg"];
//dice_hard[DICE_SIDES]["brain", "foots", "foots", "shotg", "shotg", "shotg"];
*/

//int input_player_count(); //return number of players from user input
//input_player_profiles(); //get player profiles
//input_game_count(); //get number of games


#endif // GAME_H