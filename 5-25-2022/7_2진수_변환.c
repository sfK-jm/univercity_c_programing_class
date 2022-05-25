#include <stdio.h>

int main()
{
    int num;
    printf("n = >> ");
    scanf("%d", &num);
    while (num / 2 != 0)
    {
        printf("%d\n", num % 2);
        num = num / 2;
    }
    printf("%d", num);
}