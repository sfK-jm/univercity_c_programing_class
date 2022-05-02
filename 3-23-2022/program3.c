#include <stdio.h>
 int main()
 {
     printf("\n=============실습3=============\n");

     // 입력
     int square, circle, triangle, result;

     printf("네모 - 동그라미 * 세모 = ?\n");
     printf("네모, 동그라미, 세모에 들어갈 정수를 입력하세요>> ");
     scanf("%d%d%d", &square, &circle, &triangle);

     // 계산
     result = square - circle * triangle;

     // 출력
     printf("%d - %d * %d = %d\n", square, circle, triangle, result);
 }