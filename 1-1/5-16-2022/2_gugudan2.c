#include <stdio.h>

int main()
{
    printf("<구구단 2단>n");
    for (int j = 1; j <= 9; j++)
    {
        printf("2 * %d = %2d\n", j, 2 * j);
    }
}