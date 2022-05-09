#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 10; i <= 20; i++)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);
}