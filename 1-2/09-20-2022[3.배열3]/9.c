// 0 ~ 9 사이 정수들이 주어졌을 때, 0부터 9까지 정수 중 한번도 입력되지 않은
// 정수를 출력하는 프로그램

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int arr[20] = {3, 4, 7, 1, 2, 3, 4, 0, 2, 0, 6, 9, 2, 4, 1, 0, 9, 2, 4, 6};

    // occur[x]: x가 한번 이상 입력되면 occur[x]는 true,
    //           x가 한번도 입력되지 않았다면 false
    bool occur[10] = {0};  // 0(false)으로 초기화

    for (int i = 0; i < 20; i++) {
        int x = arr[i];
        occur[x] = true;
    }
    for (int x = 0; x < 10; x++) {
        if (!occur[x]) {
            printf("%d\n", x);
        }
    }
    return 0;
}