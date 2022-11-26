// 실습문제5: 참조에 의한 전달 3 (3/3)
// 3) 구조체의 멤버 변수가 배열일때, 이 배열의 원소들을 5씩 증가시켜라

#include <stdio.h>

void increaseBy(int *ptr, int k) { *ptr += k; }

typedef struct {
    int arr[5];
} somestruct_t;

int main(void) {
    somestruct_t st = {{0, 1, 2, 3, 4}};
    for (int i = 0; i < 5; i++) {
        increaseBy(&st.arr[i], 5);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", st.arr[i]);
    }
    printf("\n");
}