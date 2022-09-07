#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int r, max = INT_MIN;
    while (max <= 90)
    {
        for (int i = 0; i < 5; i++)
        {
            r = rand() % 100 + 1;
            printf("%3d ", r);
            if (max < r)
            {
                max = r;
            }
        }
        printf("\n");
        }
    printf("max = %d\n", max);
    return 0;
}