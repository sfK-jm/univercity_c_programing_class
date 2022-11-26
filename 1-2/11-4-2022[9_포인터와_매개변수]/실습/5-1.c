// 실습문제5: 참조에 의한 전달2 (1/3)
// 1) increaseBy()함수를 사용해서 구조체 멤버의 변수의 값을 5 증가

#include <stdio.h>

void increaseBy(int *ptr, int k) { *ptr += k; }

typedef struct {
    int int_val;
} somestruct_t;

int main() {
    somestruct_t st = {5};
    increaseBy(&st.int_val, 5);
    printf("%d\n", st.int_val);
}