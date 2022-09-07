#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char title[100], author[100], press[100];
    printf("제목>> ");
    scanf("%s", title);
    printf("저자>> ");
    scanf("%s", author);
    printf("출판사>> ");
    scanf("%s", press);
    printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n", title, author, press);
}