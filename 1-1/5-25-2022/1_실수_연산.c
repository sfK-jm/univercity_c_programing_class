#include <stdio.h>

int main()
{
    float x, y, z, num;

    printf("네모 - 동그라미 * 세모 = ?\n");
    printf("네모 동그라미 세모>> ");
    scanf("%f%f%f", &x, &y, &z);
    printf("%.2f - %.2f  * %.2f = %.2f", x, y, z, x - y * z);
}