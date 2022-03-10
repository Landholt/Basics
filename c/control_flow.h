#ifndef CONTROL_FLOW_H
#define CONTROL_FLOW_H


#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
//#include <control_flow.c>

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
#ifdef __cplusplus
}
#endif
#endif
