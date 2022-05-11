#include <stdio.h>

int main()
{
    int x, sum;
    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("정수>> ");
        scanf("%d", &x);
        if (x < 0)
        {
            break;
        }
        else
        {
            sum = sum + x;
        }
    }
    printf("%d", sum);
}