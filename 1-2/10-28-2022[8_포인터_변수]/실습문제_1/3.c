#include <stdio.h>

int main(void) {
    int x = 10;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &x;

    (*ptr2)++;
    printf("x = %d\n", x);
    return 0;
}