#include <stdio.h>

int main()
{
    int x, y, z; // 길이가 작은 순서대로 입력된다고 가정했을때
    printf("세 변의 길이>> ");
    scanf("%d%d%d", &x, &y, &z);

    if  (x + y <= z)
    {
        printf("삼각형이 아님\n");
    }

    else if ( x == y && y == z)
    {
        printf("정삼각형\n");
    }

    else if ( x == y || y == z || z == x)
    {
        printf("이등변삼각형\n");
    }
    else
    {
        printf("삼각형\n");
    }
}