#include <stdio.h>

int main(void) {
    int arr1[4] = {-1, -2, -3, -4};
    int arr2[4] = {0, 1, 2, 3};
    int arr3[4] = {10, 100, 1000, 10000};
    int *parr[3] = {arr1, arr2, arr3};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%5d ", parr[i][j]);
        }
        printf("\n");
    }
}