#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int *ip;
    ip = &x;
    (*ip)++;  // x++
    printf("x=%d y=%d *ip=%d\n", x, y, *ip);

    ip = &y;
    (*ip) *= 100;  // y*= 100;
    printf("x=%d y=%d *ip=%d\n", x, y, *ip);
}