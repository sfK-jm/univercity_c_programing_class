// 계산기  0.7.1
#include <stdio.h>

int main(void)
{
    int x, y, result;
    char op;
    while (1)
    {
        printf("\n수식 입력>> ");
        scanf("%d%c%d", &x, &op, &y);
        if (x == 0 && y == 0)
        {
            printf("계산기 프로그램을 종료합니다.\n");
            break;
        }

        switch (op)
        {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0)
            {
                result = x / y;
                break;
            }
            else
            {
                printf("잘못된 연산자 입니다.\n");
                continue;
                ;
            }
        default:
            printf("잘못된 연산자입니다.\n");
            continue;
        }
        printf("%5d %c %5d = %5d\n", x, op, y, result);
    }
    return 0;
}