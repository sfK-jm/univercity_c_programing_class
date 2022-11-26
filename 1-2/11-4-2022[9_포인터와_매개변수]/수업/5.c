/*
1.두개의 정수를 전달 받고, 두 정수를 더한 값을 반환하는 함수
2.int 변수 참조를 두개 전달 받고, 두 정수를 더해서 첫번째 변수에 다시 저장하는
함수
*/

#include <stdio.h>

int add(int x, int y) { return x + y; }

void func(int *x, int *y) { *x = *x + *y; }

int main(void) {
    int x = 10, y = 20;
    int result = add(x, y);
    printf("result = %d\n", result);
    func(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}