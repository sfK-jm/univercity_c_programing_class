// 2차원의 배열의 내용을 1차원 배열로 복사한 후 출력하라

#include <stdio.h>

int main() {
    int arr_2_dimension[3][4] = {12, 5, 2, -1, -3, 7, 0, 6, 4, 8, -6, 11};
    int arr_1_dimension[12] = {0};
    int arr_1_number = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr_1_dimension[arr_1_number] = arr_2_dimension[i][j];
            arr_1_number++;
        }
    }
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr_1_dimension[i]);
    }
}