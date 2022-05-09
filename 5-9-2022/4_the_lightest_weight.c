#include <stdio.h>
#include <limits.h>

int main(void)
{
    // min : 현재까지 입력 받은 몸무게 중에 가장 작은 값
    int min, weight;

    min = INT_MAX; // +inf

    for (int i = 1; i<= 5; i++)
    {
        printf("몸무게(kg)>> ");
        scanf("%d", &weight);

        if (min > weight)
        {
            min = weight;
        }
    }

    printf("가장 가벼운 사람은 %dkg\n", min);

    return 0;
}