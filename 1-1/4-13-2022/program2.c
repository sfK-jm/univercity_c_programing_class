#include <stdio.h>

int main(void)
{

    int x = 0;
    for (int i = 1; i <= 10; i++)
    {
        x += 2;
        if (x % 8 == 0)
        {
            continue;
        }

        printf("%d ", x);
    }
    printf("\n");
}