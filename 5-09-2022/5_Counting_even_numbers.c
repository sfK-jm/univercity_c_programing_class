#include <stdio.h>

int main()
{
    int x, cnt_even = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("양의 정수>> ");
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            cnt_even++;
        }
    }
    printf("짝수는 %d개\n", cnt_even);
}