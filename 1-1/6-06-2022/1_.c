#include <stdio.h>

long long factorial(int);

long long factorial(int num)
{
    long long result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    long long result = factorial(n);
    printf("%d! = %lld\n", n, result);
    return 0;
}
