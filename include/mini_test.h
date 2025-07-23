#include <stdio.h>
#include "constants.h"

static int pass = 0, fail = 0;

// Simple function to start a test
void test_start(const char* name) {
    printf("Testing %s:\n", name);
}

// Simple function to check a condition
void check(int condition, const char* message, const char* func, int line) {
    if (condition) {
        printf(TEXT_COLOR_GREEN "  PASS" TEXT_COLOR_RESET ": %s\n", message);
        pass++;
    } else {
        printf(TEXT_COLOR_RED "  FAIL" TEXT_COLOR_RESET ": %s (%s:%d)\n", message, func, line);
        fail++;
    }
}

// Simple function to print summary
void test_summary(void) {
    if (fail == 0) {
        printf("\n" TEXT_COLOR_GREEN "%d passed" TEXT_COLOR_RESET ", %d failed\n", pass, fail);
    } else {
        printf("\n%d passed, " TEXT_COLOR_RED "%d failed" TEXT_COLOR_RESET "\n", pass, fail);
    }
}

// Convenience macro that still uses __func__ and __LINE__
#define CHECK(condition, message) check(condition, message, __func__, __LINE__)
