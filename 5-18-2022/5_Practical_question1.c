// 실습 문제 1
#include <stdio.h>

int main()
{
    for (int i = 2; i <= 8; i++)
    {
        if (i % 2 == 0)
        {
            printf("<구구단 %d단>\n", i);
            for (int j = 1; j <= 9; j++)
                printf("%2d * %d =%2d\n", i, j, i * j);
            printf("\n");
        }
        else
        {
            continue;
        }
    }
}