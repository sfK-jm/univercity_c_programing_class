#include <stdio.h>

int main() {
    int a = 10;
    int *ap;
    ap = &a;
    printf(" a = %d *ap = %d\n", a, *ap);
    a++;
    printf(" a = %d *ap = %d\n", a, *ap);
    (*ap)++;
    printf(" a = %d *ap = %d\n", a, *ap);
}