// 실습문제 6 : swap
// 두변수의 값을 교환하는 프로그램
//  값을 교환하는 코드를 swap()함수로 작성해라
#include <stdio.h>

void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

int main(void) {
    int x = 10, y = 20;
    printf("before: %d %d\n", x, y);
    swap(&x, &y);
    printf("after: %d %d\n", x, y);
}