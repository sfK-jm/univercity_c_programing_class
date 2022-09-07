#include <stdio.h>

int main()
{
    int x,y,z;

    printf("정수를 입력하세요 >> ");
    scanf("%d", &x);
    printf("product = %d\n", x);

    printf("정수를 입력하세요 >> ");
    scanf("%d", &y);
    printf("product = %d\n", x *= y );

    printf("정수를 입력하세요 >> ");
    scanf("%d", &z);
    printf("product = %d\n", x *= z );
}