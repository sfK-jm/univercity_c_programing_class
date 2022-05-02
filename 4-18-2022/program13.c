#include <stdio.h>

int main(void)
{
    int x = 1;
    printf("x = %d\n", x);
    printf("엔터 키를 누르세요...");
    getchar();

    x = x + 1;
    printf("x = %d\n", x);
    printf("엔터 키를 누르세요...");
    getchar();

    x = x + 1;
    printf("x = %d\n", x);

    return 0;
}