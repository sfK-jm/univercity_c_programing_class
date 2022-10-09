#include <stdio.h>

int main() {
    int src_arr[10] = {2, 3, 5, 7, 3, 6, 8, 9, 0, 4};
    int dst_arr[10] = {0};

    int n, m;
    printf("n = ");
    scanf("%d%d", &n, &m);

    // dst_arr[]의 마지막 위치, 다음 저장할 위치, 또는 저장된 값의 개수를
    // 기억한다

    int next_idx = 0;
    // scr_arr[]에서 n 보다 작은 정수들을 복사
    for (int i = 0; i < sizeof(src_arr) / sizeof(int); i++) {
        if (src_arr[i] < n) {
            dst_arr[next_idx] = src_arr[i];
            next_idx++;
        }
    }

    // src_arr[]에서 n이상 m미만의 정수들을 복사
    for (int i = 0; i < sizeof(src_arr) / sizeof(int); i++) {
        if (n <= src_arr[i] && src_arr[i] < m) {
            dst_arr[next_idx] = src_arr[i];
            next_idx++;
        }
    }

    // src_arr[]에서 m이상인 정수들을 복사
    for (int i = 0; i < sizeof(src_arr) / sizeof(int); i++) {
        if (m <= src_arr[i]) {
            dst_arr[next_idx] = src_arr[i];
            next_idx++;
        }
    }

    printf("dst_arr[]: ");
    for (int i = 0; i < next_idx; i++) {
        printf("%d ", dst_arr[i]);
    }
    printf("\n");
}