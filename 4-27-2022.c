#include <stdio.h>

int main(void)
{
    /*
   printf("hello world!");
    return 0;
*/

/*
    printf("프로그래밍을 \'코딩\'이라고도 부른다.\n");
    printf("삼만원은 \\30,000 라고 쓴다.\n");
    printf("오늘 비가 올 확률:\t 60%%\n");
*/

/*
    int x = 333;
    char str[10] = "abc";
    printf("0123456789\n"); printf("----------\n");
    printf("%d\n", 333); printf("%5d\n", 333); printf("%05d\n", 333);
    printf("%s\n", str); printf("%5s\n", str);
*/

/*
    for (int i = 1; i <= 9; i++)
    {
        printf("%2d * %2d = %2d\n", 2, i, 2 * i);
    }
*/

/*
    printf("0123456789\n");
    printf("----------\n");
    printf("%5d\n", 123); 
    printf("%5d\n", 12345678);
    printf("%5s\n", "abc"); 
    printf("%5s\n", "abcdefg");
*/

/*
    int x, y, result;
    char op;
    while (1)
    {
        printf("\n수식 입력>> ");
        scanf("%d%c%d", &x, &op, &y);
        if (x == 0 && y ==0)
        {
            printf("계산기 프로그램을 종료합니다.\n");
            break;
        }

        switch (op)
        {
        case '+': result = x + y; 
            break;
        case '-': result = x - y;
            break; 
        case '*': result = x * y;
            break;
        case '/': if ( y != 0)
                {
                    result = x / y ; break; 
                } 
                else
                {
                    printf("0으로 나눌수 없습니다.\n"); continue;
                }
        default: printf("잘못된 연산자 입니다.\n");
            continue;;
        }

        printf("%5d %c %5d = %5d\n", x ,op ,y, result);
    
    }
*/

/*
    double dbl = 123.4567890123; 
    printf("%.3f\n", dbl);
*/

    double dbl = 123.4567890123;
    
    printf("01234567890123456789\n");
    printf("------------------------------\n");
   
    printf("%f\n", dbl);
    printf("%20f\n", dbl);
    printf("%020f\n", dbl);

}
