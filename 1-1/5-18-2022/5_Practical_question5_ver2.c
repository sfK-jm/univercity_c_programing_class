// 실습문제 5 2중 for 문 2 Ver2

#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}