#include <stdio.h>

int main()
{
    int num = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            num++;
            printf("%2d ", num);
        }
        printf("\n");
    }
}