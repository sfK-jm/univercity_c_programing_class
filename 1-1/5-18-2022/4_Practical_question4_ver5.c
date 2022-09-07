// 실습문제 4 2중 for 문 1 Ver5

#include <stdio.h>

int main()
{
    int n, m, num;
    printf("n m = ");
    scanf("%d%d", &n, &m);
    for (int i = 1; i<= n; i++)
    {
        if ( i % 2 == 1)
        {
            for (int j= 1; j<= m; j++)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (int j = m; j>=1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}