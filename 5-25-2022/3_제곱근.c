#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    while (1)
    {

        printf("실수입력>> ");
        scanf("%lf", &num);
        if (num >= 0)
        {
            printf("%.2lf의 제곱근은 %.2lf입니다.\n", num, sqrt(num));
        }
        else
        {
            printf("계산할수 없습니다 종료합니다.\n");
            break;
        }
    }
}