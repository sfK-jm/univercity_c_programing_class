#include <stdio.h>

int main()
{
    int x, y;
    x = 1;

    for (int i = 1; i <= 5; i++)
    {
        printf("곱 = %d\n", x);
        printf("정수를 입력하세요 >> ");
        scanf("%d", &y);
        x = x * y;
    }
    printf("곱 = %d\n", x);
}