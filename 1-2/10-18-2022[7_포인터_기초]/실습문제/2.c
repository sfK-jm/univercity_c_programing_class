#include <stdio.h>

int main(void) {
    int x = 10;
    int* ptr;
    ptr = &x;
    (*ptr)++;
    printf("x = %d\n", x);
}