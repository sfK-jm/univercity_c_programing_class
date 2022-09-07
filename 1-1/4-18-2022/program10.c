#include <stdio.h>

int main()
{
    char str1[100], str2[100], str3[100];

    printf("문자열 세개 입력>> ");
    scanf("%s%s%s", str1, str2, str3);

    printf("입력 받은 문자열 3개는 : %s, %s, %s\n", str1, str2, str3);

    return 0;
}