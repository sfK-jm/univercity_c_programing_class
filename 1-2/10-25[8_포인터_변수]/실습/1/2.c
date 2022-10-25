#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *ptr;

    if (a > b)
        ptr = &a;

    else
        ptr = &b;

    *ptr = *ptr * 2;

    printf("%d %d\n", a, b);
}