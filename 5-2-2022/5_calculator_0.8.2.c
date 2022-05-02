#include <stdio.h>

// 함수 선언 (declaration)
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

//전역변수 선언
int x, y, result;
char op;

// 함수 정의 (difinition)
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main(void)
{

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
            result = add(x, y);
            break;
        case '-':
            result = sub(x, y);
            break;
        case '*':
            result = mul(x, y);
            break;
        case '/':
            if (y != 0)
            {
                result = div(x, y);
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