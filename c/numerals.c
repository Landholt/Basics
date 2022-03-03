#ifndef NUMERALS_C
#define NUMERALS_C

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
//#include <string.h>

typedef struct number_example {
    short s_short = 0b1111111111111111;
    unsigned short u_short = 0b1111111111111111;
    int s_int = -10;
    unsigned int u_int = 10;
    long s_long = 100;
    long long s_ll = 1000;
} number_example;

void numeral_helpc() {
    printf("Numeral Help C Success\n");
}

#ifdef __cplusplus
}
#endif

#endif
