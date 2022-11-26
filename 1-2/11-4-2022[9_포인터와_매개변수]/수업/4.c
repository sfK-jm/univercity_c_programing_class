#include <stdio.h>

void mult3(int *xp) { (*xp) *= 2; }

int main() {
    int x = 10;
    mult3(&x);
    printf("x = %d\n", x);
}