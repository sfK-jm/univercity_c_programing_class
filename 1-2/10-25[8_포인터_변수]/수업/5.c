#include <stdio.h>

int main(void) {
    int x = 50, y = 100;
    int *ip;

    int k;

    scanf("%d", &k);

    if (k >= 10) {
        ip = &x;
    } else {
        ip = &y;
    }
    (*ip)++;
    printf("x = %d, y = %d\n", x, y);
}