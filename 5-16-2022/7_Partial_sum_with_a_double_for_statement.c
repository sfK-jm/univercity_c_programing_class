// 정수 5개를 입력 받아 합계를 출력하는 프로그램
#include <stdio.h>

int main()
{
    int x, sum;

    sum = 0;
    for (int j = 1; j <= 5; j++)
    {
        printf("x = ");
        scanf("%d", &x);
        sum += x;
    }
    printf("sum = %d\n", sum);
}