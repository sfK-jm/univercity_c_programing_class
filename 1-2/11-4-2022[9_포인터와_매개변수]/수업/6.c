#include <stdio.h>

int div(int x, int y, int *ptr) {
    if (y == 0) return 0;
    *ptr = x / y;
    return 1;
}

int main() {
    int x, y, result, ret_val;

    printf("x y = ");
    scanf("%d%d", &x, &y);

    ret_val = div(x, y, &result);
    if (!ret_val) {
        printf("0으로 나눌 수 없습니다\n");
    } else {
        printf("result = %d\n", result);
    }
}