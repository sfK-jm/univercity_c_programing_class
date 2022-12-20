#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *ip = (double *)malloc(sizeof(double));
    if (ip == NULL) return 0;
    *ip = 123.45;
    printf("%.2lf\n", *ip);
    free(ip);
}