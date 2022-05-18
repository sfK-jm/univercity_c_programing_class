#include <stdio.h>

int main()
{
    int cnt = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cnt++;
            printf("%4d", cnt);
        }
        printf("\n");
    }
}