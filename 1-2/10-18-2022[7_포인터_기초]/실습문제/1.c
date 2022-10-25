#include <stdio.h>

int main() {
    int x = 10;
    int *xp;
    xp = &x;
    *xp /= 5;
    printf("x = %d\n", x);
}