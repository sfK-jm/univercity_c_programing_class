// 3차원 배열

#include <stdio.h>

int main(void) {
    int arr[2][4][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}