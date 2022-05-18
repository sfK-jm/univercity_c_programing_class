// 실습문제 7 소수 찾기 ver 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int);

bool is_prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(void)
{

    for (int i = 2; i <= 200; i++)
    {
        if (is_prime(i))
            printf("%d, ", i);
    }
    printf("\n\n");
}