#include <stdio.h>

int get_cross_sum(int[][4]);

int get_cross_sum(int array[][4]) {
    int sum = 0;
    // 0-0 1-1 2-2 3-3 합
    for (int i = 0; i < 4; i++) {
        sum += array[i][i];
    }

    // 3-0 2-1 1-2 0-3 합
    int j = 0;
    for (int i = 3; i >= 0; i--) {
        sum += array[i][j];
        j++;
    }

    return sum;
}

int main(void) {
    int arr[4][4] = {
        {12, 5, 2, -1}, {-2, 27, 10, 6}, {4, 16, -6, -21}, {7, 25, -15, 66}};
    int cross_sum = get_cross_sum(arr);
    double rep_val = cross_sum / 8.;
    printf("대표값 = %.2f\n", rep_val);
    return 0;
}