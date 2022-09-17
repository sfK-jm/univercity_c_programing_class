// 4 x 4 int형 배열을 아래와 같이 초기화 하고,
// 이 배열의 원소 중 가장 큰 값과 가장 작은 값을 찾아 출력해라

#include <stdio.h>

int main(void) {
    int arr[4][4] = {
        {12, 5, 2, -1}, {-3, 27, 10, 6}, {4, 16, -6, -21}, {7, 25, -15, 66}};

    int max_num = 0;
    int min_num = 999;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max_num) {
                max_num = arr[i][j];
            }

            if (arr[i][j] < min_num) {
                min_num = arr[i][j];
            }
        }
    }

    printf("max = %d\n", max_num);
    printf("min = %d", min_num);
}