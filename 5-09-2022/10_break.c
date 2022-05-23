#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            break;

        printf("i = %d\n", i);
    }
    printf("끝\n");
}