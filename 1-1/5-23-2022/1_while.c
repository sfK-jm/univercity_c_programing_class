#include <stdio.h>

int main()
{
    int x;

    x = 0;
    while (x >= 0)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &x);
    }
    printf("종료합니다\n");
    
}