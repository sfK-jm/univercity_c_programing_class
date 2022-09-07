#include <stdio.h>

int main()
{
    // int + int
    printf("%d ", 10 + 20);
    printf("(%lu byyes)\n", sizeof(10+20));

    // double + double
    printf("%.2f ", 10.0 + 20.0);
    printf("(%lu bytes)\n", sizeof(10.0 + 20.0));

    // int + float
    printf("%f ", 10 + 20.0F); 
    printf("(%lu bytes)\n", sizeof(10 + 20.F));

    // int + double
    printf("%f ", 10 + 20.0);
    printf("(%lu bytes)\n", sizeof(10 + 20.0));
}