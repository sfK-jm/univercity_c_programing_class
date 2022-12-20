#include <stdio.h>

int main() {
    int num = 17;
    int *p1, *p2;

    p1 = &num;
    p2 = p1;

    (*p2) %= 4;
    printf("num = %d", num);
}