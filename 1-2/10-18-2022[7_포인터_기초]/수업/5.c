#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    printf("%u %u %u\n", &a, &b, &c);

    int *ap = &a;
    printf("%d %d %d\n", *ap, *(ap) + 10, *(ap) + 20);
}