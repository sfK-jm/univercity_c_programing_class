#include <stdio.h>

int main()
{
    printf("(i, j):\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("i = %d: ", i);
        for (int j = 1; j <= 2; j++)
        {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}
