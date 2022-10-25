
#include <stdio.h>

int main(void) {
    int a = 5;
    int *p1;
    int *p2;

    p1 = &a;
    p2 = &a;

    *p1 = 10;
    *p2 = *p2 + 1;

    printf("%d %d %d", a, *p1, *p2);
}