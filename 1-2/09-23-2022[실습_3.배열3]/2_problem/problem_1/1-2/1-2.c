#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int get_cross_sum(int[][4]);
int get_row_rep_val(int[], int, double);

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
// 행에서 대푯값과 가장 가까운 값 찾기
int get_row_rep_val(int arr[], int size, double rep_val) {
    double similar_rep_val = 999;
    for (int i = 0; i < size; i++) {
        if (fabs(arr[i] - rep_val) < fabs(similar_rep_val - rep_val)) {
            similar_rep_val = arr[i];
        }
    }
    return fabs(similar_rep_val);
}

int main(void) {
    int arr[4][4] = {
        {12, 5, 2, -1}, {-2, 27, 10, 6}, {4, 16, -6, -21}, {7, 25, -15, 66}};
    int cross_sum = get_cross_sum(arr);
    double rep_val = cross_sum / 8.;
    printf("대표값 = %.2f\n", rep_val);

    for (int i = 0; i < 4; i++) {
        int row_rep_val = get_row_rep_val(arr[i], 4, rep_val);
        printf("arr[%d]의 대푯값 = %d\n", i, row_rep_val);
    }
    return 0;
}