#include <stdio.h>

int main(void)
{
    puts("puts()은 문자열 출력 함수");

    char str[100];
    printf("문자열 입력>> ");
    gets(str);
    puts(str);
    return 0;
}