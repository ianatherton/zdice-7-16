#include "game.h"
#include "random.h"
#include <stdio.h>

void Greetings()//..................................greet player
{
    int seconds = random_range(1, 12345);
    int minutes = random_range(1, 1234);
    int hours = random_range(1, 123);
    int days = random_range(1, 12);
    printf(".....mmmmm...braaaaiiiinnsss....\n");
    printf("\n");
    printf("%s to you!\n Welcome to Zombie Dice!\n", __func__);
    printf("it's been %d seconds, %d minutes, %d hours, %d days since your last game!", seconds, minutes, hours, days);
}

void reset_game()//..................................zero out game variables
{
    srand(time(NULL));//.............................seed random from time
}












//void input_player_count()
//{
//    scanf("Input number of players: %d", &number_of_players);
//}

//input_player_profiles()
//{
//    for(int i = 0; i < number_of_players; i++)
//    {
//        printf("Player %d strategy profile(1-10):",i+1)
//        scanf("%d",)
//    }
//}