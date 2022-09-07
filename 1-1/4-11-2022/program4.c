#include <stdio.h>

int main()
{
    int x, y, result;;
    char op;
    while (1)
    {
        printf("\n수식을 입력하세요>> ");
        scanf("%d%c%d", &x, &op, &y);

        if (x == 0 && y == 0)
        {
            printf("계산기 프로그램을 종료합니다.");
            break;
        }
        if (op == '+')
        {
            result = x + y;
        }
        else if ( op == '-')
        {
            result = x - y;
        }
        else if ( op == '*')
        {
            result = x * y;
        }
        else if ( op == '/')
            result = x / y;
        else
        {
            result = 0;
        }
        printf("%d %c %d = %d", x, op, y, result);
    }
    return 0;
}