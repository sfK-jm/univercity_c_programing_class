#include<stdio.h>

int main()
{
    int x;
    float pi = 3.14;
    printf("반지름을 입력하세요>> ");
    scanf("%d", &x);
    printf("%.2f",x * x *pi);
}