#include <stdio.h>

int main(void)
{

    double dbl = 123.4567890123;

    printf("01234567890123456789\n");
    printf("------------------------------\n");

    printf("%f\n", dbl);
    printf("%20f\n", dbl);
    printf("%020f\n", dbl);
}
