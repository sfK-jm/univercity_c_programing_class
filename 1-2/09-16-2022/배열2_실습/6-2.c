#include <stdio.h>

int main() {
    int arr_1_dimension[12] = {12, 5, 2, -1, -3, 7, 0, 6, 4, 8, -6, 11};
    int arr_2_dimension[3][4] = {0};
    int number = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr_2_dimension[i][j] = arr_1_dimension[number];
            number++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr_2_dimension[i][j]);
        }
        printf("\n");
    }
}