#include "include/random.h"

int random_range(int min, int max)
{
    int range = max - min + 1;
    int limit = RAND_MAX - (RAND_MAX % range);
    int value;
    do
    {
        value = rand();
    }
    while(value >= limit);
    return (value % range) + min;
}

void seed_random()
{
    srand(time(NULL));
}
