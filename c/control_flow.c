#ifndef FOO_H
#define FOO_H


#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

void if_c() {
    int arr[3] = {-1, 0, 1};
    for (int i = 0; i < 3; i++) {
        if (arr[i] > 0) {
            printf("Input is positive");
        }
        else if (arr[i] < 0) {
            printf("Input is negative");
        }
        else {
            printf("Input is zero");
        }
        printf("\n");
    }
}

void for_c() {
    int i = 10;
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void while_c() {
    int i = -1;
    while (i >= 0) {
        printf("%d ", ++i);
    }
    printf("\n");
}

void dowhile_c() {
    int i = -1;
    do {
        printf("%d", i);
    }
    while (i >= 0);
}

void breakcontinue_c() {
    int i = 0;
    while (i < 10) {
        if (++i > 5 && i < 11) break;
        printf("%d ", i);
    }
    printf("\n");
    i = 0;
    while (i < 15) {
        if (++i > 5 && i < 11) continue;
        printf("%d ", i);
    }
}

#ifdef __cplusplus
}
#endif
#endif
