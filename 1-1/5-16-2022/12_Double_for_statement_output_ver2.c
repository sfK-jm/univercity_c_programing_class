#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        printf("%2d ", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}