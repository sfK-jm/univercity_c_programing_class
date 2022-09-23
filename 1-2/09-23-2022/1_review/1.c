// 함수에 2차원 배ㄹ 전달하기

#include <stdio.h>

void print_2d_array(int[][3], int);

void print_2d_array(int arr[][3], int n_row) {
    for (int i = 0; i < n_row; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {0, 1, 2, 3, 4, 5};
    print_2d_array(arr, 2);

    return 0;
}