#include <stdio.h>

int main()
{
    char x[100], y[100], z[100];

    printf("이름 나이 소속>> ");
    scanf("%s%s%s", x, y, z);

    printf("이름은 %s, 나이는 %s, 소속은 %s입니다.\n", x, y, z);
    return 0;
}