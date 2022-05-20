// 실습문제 4 2중 for 문 1 Ver4

#include <stdio.h>

int main()
{
    int n, m, num;
    printf("n m = ");
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        num = i;
        for (int j = 1; j <= m; j++)
        {
            printf("%02d ", num);
            num++;
        }
        printf("\n");
    }
}
