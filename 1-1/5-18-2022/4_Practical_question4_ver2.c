// 실습문제 4 2중 for문 1 Ver2
#include <stdio.h>

int main()
{
    int n, m, num;
    printf("n m = ");
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        num = 1;
        for (int j = 1; j <= m; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}