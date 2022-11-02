#include <stdio.h>

int main(void) {
    char c = 'X';
    char* cp = &c;

    int integer = 10;
    int* ip = &integer;

    double dbl = 5.5;
    double* dp = &dbl;

    printf("%d \n%c \n%.2lf\n", *ip, *cp, *dp);
}