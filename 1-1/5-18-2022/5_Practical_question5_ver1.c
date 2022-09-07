// 실습문제 5 2중 for 문 2 Ver1

#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i=1; i<= n; i++)
    {
        for (int j =1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}