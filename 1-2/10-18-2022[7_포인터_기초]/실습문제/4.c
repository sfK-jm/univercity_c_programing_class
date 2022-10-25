#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int *xp, *yp;
    xp = &x;
    yp = &y;
    (*xp) /= 2;
    (*yp)++;

    (*xp) = (*yp);

    printf("x = %d, y = %d\n", x, y);
}