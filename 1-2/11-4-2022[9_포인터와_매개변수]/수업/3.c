#include <stdio.h>

int mult2(int x) {
    x *= 2;
    return x;
}

int main(void) {
    int x = 10;
    int result = mult2(x);
    printf("result = %d\n", result);
    printf("x = %d\n", x);
}