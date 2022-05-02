#include <stdio.h>

int main()
{
    printf("문자 두개를 입력>> ");
    char ch1 = getchar();
    char ch2 = getchar();

    printf("입력받은 문자는: ");
    putchar(ch1);
    putchar(ch2);
    return 0;
}