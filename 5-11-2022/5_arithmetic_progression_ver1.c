#include <stdio.h>

int main()
{
    int d, n;
    printf("d n >> ");
    scanf("%d%d", &d, &n);

    int term = 0;
    for (int i = 1; i <= n; i++)
    {
        term = term + d;
        printf("A%d = %d\n", i, term);
    }
}