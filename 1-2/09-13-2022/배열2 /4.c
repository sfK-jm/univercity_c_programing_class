// 3 x 5 배열을 선언하고 각각의 원소에 대해
// 행과 열의 인덱스가 (i, j)라면 (i*5+j)를 계산해서 저장한다

#include <stdio.h>

int main(void) {
    int arr[3][5] = {0};

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 5; y++) {
            printf("%3d", x * 5 + y);
        }
        printf("\n");
    }

    return 0;
}