#include <stdio.h>

int main()
{
    int x, y, z;
    printf("input 3 integers>> ");
    scanf("%d%d%d", &x, &y, &z);

    if (x < y && x < z) // x가 제일 작을 경우
    {
        if (y < z) // 순서가 x < y < z 일경우
        {
            printf("%d %d %d\n", x, y, z);
        }
        else // 순서가 x < z < y 일 경우
        {
            printf("%d %d %d\n", x, z, y);
        }
    }
    else if (y < x && y < z) // y가 제일 작을 경우
    {
        if (x < z) // 순서가 y < x < z읽 경우
        {
            printf("%d %d %d\n", y, x, z);
        }
        else // 순서가 y < z < x 일 경우
        {
            printf("%d %d %d\n", y, z, x);
        }
    }
    else // z가 제일 작을 경우
    {
        if (x < y) // 순서가 z < x < y 일경우
        {
            printf("%d %d %d", z, x, y);
        }
        else // 순서가 z < y < x 일경우
        {
            printf("%d %d %d", z, y, x);
        }
    }
}