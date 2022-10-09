// 4 x 4 int형 배열을 선언하고 좌상단부터 우하단까지 대각선의 합을 출력하라

#include <stdio.h>

int main() {
    int arr[4][4] = {12, 5, 2, -1, -3, 7, 0, 6, 4, 8, -6, 11, 7, 2, -5, 9};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i][i];
    }
    printf("%d", sum);
}