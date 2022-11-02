#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 10;

    int *ptr;

    if (a > b)
        ptr = &a;
    else
        ptr = &b;

    *ptr = *ptr * 2;

    printf("%d %d\n", a, b);
}