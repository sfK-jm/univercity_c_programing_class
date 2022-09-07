#include <stdio.h>

int main(void)
{
    // sum: 현재까지 입력 받은 정수의 합
    int sum, n;

    sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &n);
        sum += n;
    }

    printf("sum = %d\n", sum);
    return 0;
}