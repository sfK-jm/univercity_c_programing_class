#include <stdio.h>

int main() {
    int a = 50;
    int *ap1, *ap2;

    ap1 = &a;
    ap2 = &a;

    printf("a=%d *ap1=%d *ap2=%d\n", a, *ap1, *ap2);

    a += 10;
    printf("a=%d *ap1=%d *ap2=%d\n", a, *ap1, *ap2);

    a -= 50;
    printf("a=%d *ap1=%d *ap2=%d\n", a, *ap1, *ap2);
}