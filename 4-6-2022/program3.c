#include <stdio.h>

int main()
{
    int x, y;
    printf("k>> ");
    scanf("%d", &x);
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &y);
        if(y%x == 0)
        {
            printf("%d은(는) %d의 배수입니다.\n", y,x);
        }
        else
        {
            printf("%d은(는) %d의 배수가 아닙니다\n", y,x);
        }
        printf("\n");
    }
}