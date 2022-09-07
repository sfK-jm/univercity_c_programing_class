#include <stdio.h>

int main()
{
    int num, odd_cnt = 0;
            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("홀수는 %d개입니다.\n", odd_cnt);
}