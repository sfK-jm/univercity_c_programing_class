#include <stdio.h>

int main(void)
{
    int x, y;
    // 합, 차, 곱, 나눈 몫, 나머지
    int sum, diff, mult, quot, rem;

    while (1)
    {
        printf("\n정수 두 개를 입력하세요>> ");
        scanf("%d%d", &x, &y);
        if (x == 0 && y == 0)
        {
            printf("계산기 프로그램을 종료합니다.\n");
            break;
        }

        sum = x + y;
        diff = x - y;
        mult = x * y;
        printf("%d 더하기 %d은(는) %d 입니다.\n", x, y, sum);
        printf("%d 빼기 %d은(는) %d 입니다.\n", x, y, diff);
        printf("%d 곱하기 %d은(는) %d 입니다.\n", x, y, mult);
        if (y != 0)
        {
            quot = x / y;
            rem = x % y;
            printf("%d을(를) %d(으)로 나눈 몫은 %d 입니다.\n", x, y, quot);
            printf("%d을(를) %d(으)로 나눈 나머지는 %d 입니다.\n", x, y, rem);
        }
    }
    return 0;
}