#include<stdio.h>

int main()
{
    double x1, x2, num;
    scanf("%lf%lf", &x1, &x2);
    if ( x1 > x2)
    {
        num = x2;
        x2 = x1;
        x1 = num;
    }
    printf("x1과 x2 사이의 거리는 %.2lf", x2 - x1  );
}