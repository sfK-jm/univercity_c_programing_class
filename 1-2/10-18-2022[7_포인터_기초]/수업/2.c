#include <stdio.h>

int main() {
    int x = 1;
    int *xp;
    xp = &x;  // xp가 x를 가르킴
    for (int i = 0; i < 10; i++) {
        (*xp) *= 2;
        printf("%d\n", x);
    }
}