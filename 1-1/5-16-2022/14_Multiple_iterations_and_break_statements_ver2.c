#include <stdio.h>

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
            if (i == 1 && j == 2)
                break;
        }
        printf("\n");
    }
    printf("종료합니다.\n");
}