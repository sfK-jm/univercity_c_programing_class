// 실습문제1 : 참조에 의한 전달
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// xp가 가리키는 변수의 값을 10 증가 시킨다.
void incBy10(int* xp) { *xp += 10; }

int main(void) {
    int x;
    printf("x = ");
    scanf("%d", &x);
    incBy10(&x);
    printf("x = %d\n", x);
    printf("\n");
}