// 실습문제 5 2중 for문 2 5
#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
