#include <stdio.h>

int main()
{
    int x;

    do {
        printf("정수를 입력하세요>> ");
        scanf("%d", &x);
    }while(x>=0);
    printf("종료합니다.\n");
}