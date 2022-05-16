// <정수 5개를 입력 받아 함계 출력>
#include<stdio.h>

int main()
{
    int x, sum;

    for (int i =1; i<=3; i++)
    {
        sum = 0;
        for (int j =1; j<=5; j++)
        {
            printf("x = ");
            scanf("%d", &x);
            sum += x;
        }
        printf("sum = %d\n", sum);
        printf("\n");
    }
}