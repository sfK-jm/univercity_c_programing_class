#include <stdio.h>

int main(void) {
    char c = 'A';
    char* cp = &c;

    int i = 5;
    int* ip = &i;

    double d = 4;
    double* dp = &d;

    printf("%c %d %.2lf\n", *cp, *ip, *dp);
}