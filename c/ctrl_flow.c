#ifndef CTRL_FLOW_C
#define CTRL_FLOW_C


#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define C_FOR_START 23
#define C_FOR_END 25
#define C_WHILE_START 30
#define C_WHILE_END 33
#define C_DOWHILE_START 38
#define C_DOWHILE_END 42
#define C_IF_START 47
#define C_IF_END 59
#define C_BRKCON_START 63
#define C_BRKCON_END 73

void c_for_ex() {
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
    printf("\n");
}

void c_while_ex() {
int i = 0;
while (++i < 10) {
    printf("%d ", i);
}
    printf("\n");
}

void c_dowhile_ex() {
int i = 0;
do {
    printf("%d ", i);
}
while (++i < 10);
printf("\n");
}

void c_if_ex() {
int arr[3] = {-1, 0, 1};
for (int i = 0; i < 3; i++) {
    if (arr[i] > 0) {
        printf("%d is positive", arr[i]);
    }
    else if (arr[i] < 0) {
        printf("%d is negative", arr[i]);
    }
    else {
        printf("%d is zero", arr[i]);
    }
    printf(" ");
}
}

void c_brkcon_ex() {
int i = 0;
while (i < 15) {
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
