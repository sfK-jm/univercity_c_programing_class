#include <stdio.h>

int main()
{
    int x,y;
    printf("정수 두개를 입력하세요 >> ");
    scanf("%d%d", &x, &y);

    printf("%d 더하기 %d은(는) %d 입니다.\n", x, y, x+y);
    printf("%d 빼기 %d은(는) %d 입니다.\n", x, y, x-y);
    printf("%d 곱하기 %d은(는) %d 입니다.\n", x, y, x*y);
    if (y != 0)
    {
        printf("%d을(를) %d로 나눈몫은 %d 입니다.\n", x, y, x/y );
        printf("%d을(를) %d로 나눈 나머지는 %d 입니다.\n", x, y, x%y );
    }
    else
    {
        printf("몰?루\n");
    }
}