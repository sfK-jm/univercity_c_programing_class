// 실습문제 5 2중 for 문 2 Ver4

#include <stdio.h>

int main()
{
    int n, add;
    add = 1;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("*\n");  
        }
        else
        {
            for (int j = 1; j <= i + add; j++)
            {
                printf("*");
                
            }
            add = add + 1;
            printf("\n");
        }
    }
}