// 실습문제3 배열과 포인터
// printrr()함수는 배열의 시작 주소를 받아서 배열의 원소를 출력한다

#include <stdio.h>

void print_arr(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(&ptr[0] + i));
    }
    printf("\n");
}

int main(void) {
    int arr[5] = {0, 1, 2, 3, 4};
    print_arr(arr, 5);
    return 0;
}