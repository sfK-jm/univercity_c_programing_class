// 4 x 2 int형 배열 선언하고, 배열을 순회하면서 인덱스와 원소 값을 출력하는
// 프로그램

#include <stdio.h>

int main(void) {
    int arr[4][2];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}