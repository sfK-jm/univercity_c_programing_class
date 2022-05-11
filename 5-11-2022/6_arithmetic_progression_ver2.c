#include <stdio.h>

int main()
{
    int k, d, n; // k:제1항, d:등차, n:항의 개수(1..n)
    printf("k d n>> ");
    scanf("%d%d%d", &k, &d, &n);

    int term = k;
    for (int i = 1; i <= n; i++)
    {
        printf("A%d = %d\n", i, term);
        term += d;
    }
}