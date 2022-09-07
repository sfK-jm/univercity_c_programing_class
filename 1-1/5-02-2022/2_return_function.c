#include <stdio.h>

int div3(int);

int div3(int a)
{
    int result = a % 3;
    return result;
}

int main(void)
{
    int x = 10;
    int result = div3(x);
    printf("%d\n", result);
    return 0;
}