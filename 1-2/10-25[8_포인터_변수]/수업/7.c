#include <stdio.h>

int main() {
    int integer = 10;
    char ch = 'x';
    double dbl = 5.5;
    int *i;
    char *c;
    double *d;
    i = &integer;
    c = &ch;
    d = &dbl;
    printf("%d\n%c\n%.2lf\n", *i, *c, *d);
}