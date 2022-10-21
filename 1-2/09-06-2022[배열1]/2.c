#include <stdio.h>

int main(void) {
    int arr[4];

    printf("정수 4개 입력>> ");
    scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    return 0;
}