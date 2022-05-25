#include <stdio.h>

int main()
{
    int x, i;
    i = 1;
    while(i <= 5)
    {
        printf("양의 정수>> ");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("%d은(는) 짝수\n", x);
        }
        else
        {
            printf("%d은(는) 홀수\n", x);
        }
        i++;
    }
}