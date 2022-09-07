#include <stdio.h>

int main(void)
{
    float arr[3];

    printf("실수 3개 입력>> ");
    scanf("%f%f%f", &arr[0], &arr[1], &arr[2]);

    printf("arr[0] = %.1f\n", arr[0]);
    printf("arr[1] = %.1f\n", arr[1]);
    printf("arr[2] = %.1f\n", arr[2]);
    return 0;
}