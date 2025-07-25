#include "include/constants.h"
#include "include/game.h"
#include <stdbool.h>
#include <stdio.h>

#ifdef DEBUG
#include "include/tests.h"
#endif

int main()
{
    #ifdef DEBUG
    run_tests(); //.......................run tests in DEBUG mode
    #endif
    reset_game(); //......................initialize game and reset variables
    Greetings(); //.......................greet player
    //input_player_count(); //............input player count
    //input_player_profiles(); //.........input player profiles
    //input_game_count(); //..............input game count
    //run_game(); //......................arguments: players
}