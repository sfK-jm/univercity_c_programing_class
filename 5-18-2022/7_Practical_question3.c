// 실습문제3 미로

#include <stdio.h>

int main()
{
    int n,m;
    printf("n m =");
    scanf("%d%d",&n,&m);
    for (int i=1; i<=n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j =1; j <= m; j++)
            {
                printf("*");
            }
            
        }
        else
        {
            printf("*");
            for(int k = 2; k<= m-1; k++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");
    }
}