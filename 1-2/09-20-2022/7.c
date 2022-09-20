// 2차원 배열의 크기
#include <stdio.h>

#define N_ROW 4
#define N_COLUM 2

int main(void) {
    int arr[N_ROW][N_COLUM];

    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(int) * N_ROW * N_COLUM);
    printf("%lu\n", sizeof(arr[0]));
    printf("%lu\n", sizeof(int) * N_COLUM);
    printf("%lu\n", sizeof(arr[0][0]));
    printf("%lu\n", sizeof(int));
    return 0;
}