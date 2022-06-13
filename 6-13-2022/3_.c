#include <stdio.h>

int main()
{
    int x, y, min;
    printf("정수 두 개 입력>> ");
    scanf("%d%d", &x, &y);
    min = x > y ? y : x;
    printf("min(%d, %d) = %d", x, y, min);

    return 0;
}