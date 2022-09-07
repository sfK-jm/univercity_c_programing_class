#include <stdio.h>
 int main()

 {
     printf("\n=============실습5=============\n");
     int cast_days;
     printf("무인도에 며칠동안 표류했습니까? ");
     scanf("%d", &cast_days);

     int years, months, days;
     years = cast_days / 360;

     int months_n_days = cast_days % 360; // 360*(년 수)를 뺀 날짜만 남는다.
     months = months_n_days / 30;
     days = months_n_days % 30;

     printf("%d일은 %d년 %d개월 %d일입니다.\n", cast_days, years, months, days);
 }