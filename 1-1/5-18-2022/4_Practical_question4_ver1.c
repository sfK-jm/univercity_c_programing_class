// 실습문제 4 2중 for 문 1 Ver 1

#include <stdio.h>

int main()
{
    int n, m;
    printf("n m = ");
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}