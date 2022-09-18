// int arr1[5][5]에 정수 1~25를 저장한 후, int arr2[5][5]에 복사한후 출력해라

#include <stdio.h>

int main(void) {
    int arr1[5][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15},
                      {16, 17, 18, 19, 20},
                      {21, 22, 23, 24, 25}};
    int arr2[5][5] = {0};
    // arr2 <-- arr 1 복사
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = arr1[i][j];
        }
    }
    // arr2 출력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%02d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}