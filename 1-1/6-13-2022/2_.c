#include <stdio.h>

int main()
{
    int x = 100000;
    printf("%d\n", (int)x);
    printf("%d\n", (short)x);
    printf("%ld\n", (long)x);
    printf("%lld\n", (long long)x);

    return 0;
}