#include <stdio.h>

int base;

int sum(int, int);

int sum(int a, int b)
{
    int res = base + a + b;
    return res;
}

int main(void)
{
    printf("base = %d\n", base);
    base = 100;
    int result = sum(10,20);
    printf("%d\n", result);
    return 0;
}