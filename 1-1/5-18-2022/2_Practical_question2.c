// 실습문제 2 정수의 합

#include <stdio.h>

int main()
{
    int num, m, n;

    printf("m = ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        num = 0;
        printf("n = ");
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            num += j;
        }
        printf("%d\n", num);
    }
}