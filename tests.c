#include "include/tests.h"
#include "include/game.h"
#include "include/random.h"
#include "include/players.h"
#include "include/cup.h"
#include "include/constants.h"

void run_tests()
{
    printf("Function --> %s <-- running.\n", __func__);
    
    // Run a basic test
    bool result = test_test();
    
    if (result) {
        printf(TEXT_COLOR_GREEN "All tests passed.\n" TEXT_COLOR_RESET);
    } else {
        printf(TEXT_COLOR_RED "Some tests failed.\n" TEXT_COLOR_RESET);
    }
}

bool test_test()
{
    return true;
}