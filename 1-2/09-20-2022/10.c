// 0부터 9까지 정수 각각이 입력된 횟수를 출력하라

#include <stdio.h>

int main() {
    int arr[20] = {3, 4, 7, 1, 2, 3, 4, 0, 2, 0, 6, 9, 2, 4, 1, 0, 9, 2, 4, 6};

    int count_array[10] = {0};

    // 입력된 횟수 세기
    for (int i = 0; i < 20; i++) {
        int x = arr[i];
        count_array[x]++;
    }

    // 출력
    printf("No. of occurrences:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d times\n", i, count_array[i]);
    }
}