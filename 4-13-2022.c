
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
            case '/': if (y != 0) {
                result = x / y; break; }
            else {
                printf("0으로 나눌수 없습니다.\n");
                continue;
            }
            
            default: printf("잘롯된 연산자 입니다.\n");
                continue;
        }
        printf("%d %c %d = %d\n", x, op, y, result);
    }
    return 0;
}


/*
#include <stdio.h>

int main(){
    
    int num;
    for (int i = 1; i <= 5; i++){
        printf(">> " );
        scanf("%d", &num);
        if (num >= 100)
            break;
        printf("num = %d\n" , num);
    }
}
*/

/*
#include <stdio.h>

int main(){
    
    int num;
    for (int i = 1; i <= 5; i++){
        printf(">> " );
        scanf("%d", &num);
        if (num >= 100)
            continue;;
        printf("num = %d\n" , num);
    }
}
*/

