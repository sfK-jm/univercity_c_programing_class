#include <stdio.h>

int main()
{
    int weight, over_60kg = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("몸무게kg>> ");
        scanf("%d", &weight);

        if (weight >= 60)
        {
            over_60kg++;
        }
    }
    printf("60kg 이상인 사람은 %d명\n", over_60kg);
}