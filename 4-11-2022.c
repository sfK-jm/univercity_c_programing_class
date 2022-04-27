

#include <stdio.h>

int main (void)
{
    int x, y;
    // 합, 차, 곱, 나눈 몫, 나머지
    int sum, diff, mult, quot, rem;
    
    while (1)
    {
        printf("\n정수 두 개를 입력하세요>> ");
        scanf("%d%d", &x, &y);
        if (x == 0 && y == 0)
        {
            printf("계산기 프로그램을 종료합니다.\n");
            break;
        }
        
        sum = x + y; diff = x - y; mult = x * y;
        printf("%d 더하기 %d은(는) %d 입니다.\n", x, y, sum);
        printf("%d 빼기 %d은(는) %d 입니다.\n", x, y, diff);
        printf("%d 곱하기 %d은(는) %d 입니다.\n", x, y, mult);
        if ( y != 0 )
        {
            quot = x / y; rem = x% y;
            printf("%d을(를) %d(으)로 나눈 몫은 %d 입니다.\n", x, y, quot);
            printf("%d을(를) %d(으)로 나눈 나머지는 %d 입니다.\n", x, y, rem);
        }
    }
    return 0;
}


/*

#include <stdio.h>

int main()
{
    char x;
    printf("성별을 입력하세요(M/F) >> ");
    scanf("%c", &x);
    
    printf("당신으 성별은 %c 입니다.", x);
}

*/

/*
#include <stdio.h>

int main()
{
    char x, y;
    
    printf("문자 두개 입력>> ");
    scanf("%c%c", &x, &y);
    printf("%c,%c\n", x, y);
    
    
}
*/

/*
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
*/
/*

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
*/
