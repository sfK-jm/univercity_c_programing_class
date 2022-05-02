#include <stdio.h>

int main()
{
    int x;

    printf("나이를 입력하세요 : ");
    scanf("%d", &x);

    if (x >= 10 && x <= 19)
    {
        printf("이 사람은 10대입니다");
    }
    else
    {
        printf("이 사람은 10대가 아닙니다.");
    }
}