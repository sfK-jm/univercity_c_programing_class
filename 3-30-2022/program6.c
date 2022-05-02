#include <stdio.h>

int main()
{
    int a, b, c;
    printf("a b >>");
    scanf("%d%d", &a, &b);

    if(a<=b)
    {
        printf("a = %d, b = %d", a, b);
    }
    else
    {
                // 입력예시 25 15
        c = a; // c = 25
        a = b; // a = 15
        b = c; // b = 15

        printf("a = %d, b = %d", a, b );
    }


}