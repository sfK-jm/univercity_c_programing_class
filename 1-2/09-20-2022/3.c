// 최솟값을 찾는 함수

// 초기화된 2차원 배열이 주어졌을 때, 최대값을 찾는 프로그램

#include <limits.h>
#include <stdio.h>

#define N_ROW 4
#define N_COLUM 4

int array2d_max(int[N_ROW][N_COLUM]);
int arrat2d_min(int[N_ROW][N_COLUM]);

int array2d_max(int arr[N_ROW][N_COLUM]) {
    int max = INT_MIN;
    for (int i = 0; i < N_ROW; i++) {
        for (int j = 0; j < N_COLUM; j++) {
            if (max < arr[i][j]) max = arr[i][j];
        }
    }
    return max;
}

int array2d_min(int arr[N_ROW][N_COLUM]) {
    int min = INT_MAX;
    for (int i = 0; i < N_ROW; i++) {
        for (int j = 0; j < N_COLUM; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main() {
    int arr[N_ROW][N_COLUM] = {
        {12, 5, 2, -1}, {-3, 27, 10, 6}, {4, 16, -6, -21}, {7, 25, -15, 66}};

    int max_elm = array2d_max(arr);
    printf("max = %d\n", max_elm);
    int min_elm = array2d_min(arr);
    printf("min = %d\n", min_elm);
    return 0;
}
