#include <stdio.h>

int main()
{
    int x, i;
    i = 1;
    do
    {
        printf("양의 정수>> ");
        scanf_s("%d", &x);

        if (x % 2 == 0)
        {
            printf("%d은(는) 짝수\n", x);
        }
        else
        {
            printf("%d은(는) 홀수\n", x);
        }
        i++;
    } while (i <= 5);
}