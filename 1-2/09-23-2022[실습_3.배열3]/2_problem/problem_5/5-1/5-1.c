#include <stdio.h>

int main() {
    int src_arr[10] = {2, 3, 5, 7, 3, 6, 8, 9, 0, 4};
    int dst_arr[10] = {0};

    int n;
    printf("n = ");
    scanf("%d", &n);

    // dst_arr[]의 마지막 위치, 다음 저장할 위치, 또는 저장된 값의 개수를
    // 기억한다

    int next_idx = 0;
    for (int i = 0; i < sizeof(src_arr) / sizeof(int); i++) {
        if (src_arr[i] < n) {
            dst_arr[next_idx] = src_arr[i];
            next_idx++;
        }
    }

    printf("dst_Arr[]: ");
    for (int i = 0; i < next_idx; i++) {
        printf("%d ", dst_arr[i]);
    }
    printf("\n");
}