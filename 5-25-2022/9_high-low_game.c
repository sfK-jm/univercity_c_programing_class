#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));

    int chance = 1, num, user_num;
    num = rand() % (20) + 1;
    printf("====high-low game====\n");
    printf("chance 5\n");
    // printf("답 %d\n", num);

    while (chance <= 5)
    {
        scanf("%d", &user_num);
        if (num > user_num)
        {
            printf("highter\n");
        }
        else if (num < user_num)
        {
            printf("lower\n");
        }
        else
        {
            printf("You win");
            break;
        }
        printf("\n");
        chance++;
    }
    if (chance == 6)
    {
        printf("you lose");
    }
}