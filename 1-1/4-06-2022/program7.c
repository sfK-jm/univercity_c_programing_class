#include <stdio.h>

int main()
{
    int r, k, x, i ;
    printf("r k>> ");
    scanf("%d%d", &r, &k);
    x = r;

    for ( i = 1; i <= k; i++)
    {
        printf("%d ", r);
        r = r * x ;
    }
}