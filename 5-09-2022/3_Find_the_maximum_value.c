#include <stdio.h>
#include <limits.h>

int main(void)
{
    int max, x;
    // 가능한 가장 작은 값으로 시작
    // 또는 첫번째 데이터로 초기화 하기도 함

    max = INT_MIN;
    for (int i = 1; i <= 5; i++)
    {
        printf("정수>> ");
        scanf("%d", &x);
        if (max < x)
        {
            max = x;
        }
    }
    printf("최댓값은 %d\n", max);
    return 0;
}