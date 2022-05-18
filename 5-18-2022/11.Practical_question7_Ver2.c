// 실습문제 7 소수 찾기 ver 2

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

    int m;
    printf("m = ");
    scanf("%d", &m);

    int cnt_prime = 0;
    for (int i = 2; i <= m; i++)
    {
        if (is_prime(i))
            cnt_prime++;
    }
    printf("%d이하 소수는 %d개\n\n", m, cnt_prime);
}
