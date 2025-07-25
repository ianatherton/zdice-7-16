#include <stdio.h>
#include "include/tests.h"
#include "include/constants.h"
#include "include/game.h"
#include "include/random.h"
#include "include/players.h"
#include "include/cup.h"

void run_tests() //........................run tests
{
    printf("Function --> %s <-- running.\n", __func__);
    bool test_test_result = test_test();
    bool test_clear_game_vars_result = test_clear_game_vars();
    bool test_seed_random_result = test_seed_random();
    
    bool all_tests_passed = test_test_result && test_clear_game_vars_result && test_seed_random_result;
    
    if (all_tests_passed){printf(TEXTGREEN "All tests passed.\n" TEXTRESET);} 
    else {printf(TEXTRED "Some tests failed.\n" TEXTRESET);}
}

bool test_test()
{
    bool result = false;
    if (result == true){return true;}else {printf(TEXTRED "Test: --> %s <-- failed.\n" TEXTRESET, __func__); return false;}
}

bool test_clear_game_vars()
{
    bool result = true;
    if (result == true){return true;}else {printf(TEXTRED "Test: --> %s <-- failed.\n" TEXTRESET, __func__); return false;}
}

bool test_seed_random()
{
    bool result = true;
    if (result == true){return true;}else {printf(TEXTRED "Test: --> %s <-- failed.\n" TEXTRESET, __func__); return false;}
}