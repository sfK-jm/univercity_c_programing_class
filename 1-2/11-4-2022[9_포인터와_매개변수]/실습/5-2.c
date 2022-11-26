// 실습무누제5: 참조에 의한 전달2 (2/3)
// 2) 앞의 함수 increaseBy를 사용해서 배열의 원소를 각각 5 증가시켜라

#include <stdio.h>

void increaseBy(int *ptr, int k) { *ptr += k; }

int main(void) {
    int arr[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++) {
        increaseBy(&arr[i], 5);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}