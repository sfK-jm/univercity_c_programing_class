#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("i = %d: ", i);
        for (int j = 1; j <= i; j++)
        {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}