#include <stdio.h>

int main()
{
    char str[100];

    printf("본인 이름을 입력하세요>> ");
    scanf("%s", str);

    printf("당신의 이름은 %s입니다.\n", str);
    return 0;
}