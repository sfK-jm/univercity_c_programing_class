#include <stdio.h>

int main()
{
    int a1, d, upper_bound;
    scanf("%d%d%d", &a1, &d, &upper_bound);
    while (a1 <= upper_bound)
    {
        printf("%d ", a1);
        a1 = a1 + d;
    }
}