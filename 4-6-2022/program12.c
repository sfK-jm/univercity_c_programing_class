#include <stdio.h>

int main()
{
    int x, y, z, etc ;
    printf("세 변의 길이 >> ");
    scanf("%d%d%d", &x, &y, &z);

    if (x >= y && x >= z)
    {
        etc = x;
        x = z;
        z = etc;
    }
    else if ( y >= x && y >= z )
    {
        etc = y;
        y = z;
        z = etc;
    }

    if (x + y <= z) {
        printf("삼각형이 아님\n");
    }
    else if (x == y && y == z) {
        printf("정삼각형\n");
    }
    else if (x == y || y == z || z == x) {
        printf("이등변삼각형\n");
    }
    else {
        printf("삼각형\n");
    }
}