#include <stdio.h>

int main(void) {
    int a = 5, b = 20;
    int *p1;
    int *p2;

    p1 = &a;
    *p1 = 6;
    printf("%d %d\n", a, b);

    p2 = p1;
    *p2 = b;
    printf("%d %d\n", a, b);

    p2 = &b;
    *p1 = *p2;
    printf("%d %d\n", a, b);
}