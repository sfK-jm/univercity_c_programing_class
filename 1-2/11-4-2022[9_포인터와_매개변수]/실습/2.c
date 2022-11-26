// 실습문제2: 복사 VS 참조
#include <stdio.h>

void mult2_int(int *x) { *x *= 2; }
void mult2_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main(void) {
    int x = 10, y = 20, z = 30;
    mult2_int(&x);
    mult2_int(&y);
    mult2_int(&z);
    printf("%d %d %d\n", x, y, z);
    printf("\n");

    int arr[5] = {1, 2, 3, 4, 5};
    mult2_array(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}