#include <stdio.h>

int main(void)
{

    int n1, n2;
    char ch1, ch2;

    for (int i = 1; i <= 5; i++)
    {
        printf("문자-정수-문자-정수 입력>> ");
        scanf("%c%d%c%d", &ch1, &n1, &ch2, &n2);
        getchar();
        if (n1 == 0 && n2 == 0)
        {
            printf("종료합니다.\n");
            break;
        }
        printf("입력한 값은 [%c] [%d] [%c] [%d] 입니다.\n", ch1, n1, ch2, n2);
    }
}