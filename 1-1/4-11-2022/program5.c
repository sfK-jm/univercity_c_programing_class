#include <stdio.h>

int main()
{
    int x, y, result;
    char op;
    while(1)
    {
        printf("\n수식 입력>> ");
        scanf("%d%c%d", &x, &op, &y);
        if(x == 0 && y == 0 )
        {
            printf("계산기 프로그램을 종료합니다.\n");
            break;
        }
        switch(op)
        {
            case '+': result = x + y; break;
            case '-': result = x - y; break;
            case '*': result = x * y; break;
            case '/': result = x / y; break;
            default:  result = 0; break;
        }
        printf("%d %c %d = %d\n", x, op, y, result);
    }
    return 0;
}

