#include <stdio.h>

int main()
{
    for (int i = 2; i <= 9; i++)
    {
        printf("<구구단 %d단>\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("%d * %d = %2d\n", i, j, i * j);
        }
        printf("\n");
    }
}