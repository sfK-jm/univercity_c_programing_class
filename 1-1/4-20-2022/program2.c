#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int x = 0;
    while (1)
    {
        x++;
        printf("%d\n", x);
        printf("계속하려면 엔터 키를 입력하세요...\n");
        getchar();
    }
}