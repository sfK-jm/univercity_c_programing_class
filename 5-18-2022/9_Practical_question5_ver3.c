// 실습문제 5 2중 for 문 2 Ver3

#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i - 1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
}