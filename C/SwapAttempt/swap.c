#include <stdio.h>

void swap(int *pa, int *pb) { // pa --> a: 17   pb --> b: 21
    int t = *pa;              // t: 17
    *pa = *pb;                // pa --> a: 21   pb --> b: 21
    *pb = t;                  // pa --> a: 21   pb --> b: 17
    return;
}

int main(void) {
    int a = 17;               // a: 17
    int b = 21;               // b: 21

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);     // pa --> a: 21   pb --> b: 17
    return 0;
}