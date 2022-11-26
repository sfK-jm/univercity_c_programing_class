#include <stdio.h>

void f(int *xp) { (*xp)++; }

int main() {
    int x = 10;
    f(&x);
    printf("x = %d\n", x);
}