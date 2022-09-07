#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("i = %d:\n", i);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}