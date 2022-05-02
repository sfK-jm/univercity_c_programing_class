#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    printf("문자 '%c'의 아스키코드 값은 %d\n", 'A', 'A');
    printf("문자 '%c'의 아스키코드 값은 %d\n", 'Z', 'Z');
    printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", 'A', 'Z');

    printf("문자 '%c'의 아스키코드 값은 %d\n", 'a', 'a');
    printf("문자 '%c'의 아스키코드 값은 %d\n", 'z', 'z');
    printf("알파벳 소문자의 아스키코드 값 범위는 %d ~ %d\n", 'a', 'z');

    printf("문자 '%c'의 아스키코드 값은 %d\n", '0', '0');
    printf("문자 '%c'의 아스키코드 값은 %d\n", '9', '9');
    printf("숫자의 아스키코드 값 범위는 %d ~ %d\n", '0', '9');
}