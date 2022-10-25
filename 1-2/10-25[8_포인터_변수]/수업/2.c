#include <stdio.h>

int main() {
    int x = 10;
    int *p1, *p2;

    p1 = &x;
    p2 = &x;

    x++;
    printf("x=%d *p1=%d *p2=%d\n", x, *p1, *p2);

    *p1 = 20;  // x = 20
    printf("x=%d *p1=%d *p2=%d\n", x, *p1, *p2);

    (*p2)++;
    printf("x=%d *p1=%d *p2=%d\n", x, *p1, *p2);
}