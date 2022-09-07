#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num;
    while (1)
    {
        printf("정수(0~3)>> ");
        scanf("%d", &num);
        switch (num)
        {
        case 0:
            printf("종료합니다.\n");
            exit(0);
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        default:
            printf("처리할 수 없습니다.\n");
            break;
        }
    }
}