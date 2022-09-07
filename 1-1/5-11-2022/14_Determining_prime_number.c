#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);

bool is_prime(int n)
{
    if (n == 1)
        return false;

    bool prime = true;
    for (int div = 2; div < n; div++)
    {
        if (n % div == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    int n;
    while (1)
    {
        printf("n = ");
        scanf("%d", &n);
        if (n <= 0)
            break;

        if (is_prime(n))
        {
            printf("%d IS a prime number\n", n);
        }
        else
        {
            printf("%d is NOT a prime number\n", n);
        }
    }
    printf("끝\n");
}