#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool over_100kg = false;
    int weight;
    for (int i = 1; i <= 5; i++)
    {
        printf("몸무게(kg)>> ");
        scanf("%d", &weight);
        if (weight >= 100)
        {
            over_100kg = true;
        }
    }
    if (over_100kg)
    {
        printf("100kg 이상인 사람이 있음\n");
    }
    else
    {
        printf("100kg 이상인 사람이 없음\n");
    }
    return 0;
}
//  0이 한번도 없었으면 false(초깃값)
//  한번이라도 있었으면 true