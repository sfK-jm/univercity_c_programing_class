#include <stdio.h>

int main(void)
{
    char x;
    printf("알파벳 대문자 입력>> ");
    scanf("%c", &x);
    int y = x + 32;
    printf("알파벳 '%c'의 소문자는 '%c'입니다.", x, y);
    return 0;
}