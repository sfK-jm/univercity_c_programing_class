#include <stdio.h>

typedef long long int LL;

LL add(int, int);

LL add(int num1, int num2) { return num1 + num2; }

int main(void) {
    LL num1, num2;

    printf("큰 정수 두개 입력>> ");
    scanf("%lld%lld", &num1, &num2);
    printf("합은 %lld", add(num1, num2));
}