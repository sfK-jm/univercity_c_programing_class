// 배열의 i번 원소를 k만큼 증가시키려고 한다.
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, k;

    printf("i k = ");
    scanf("%d%d", &i, &k);

    int *ap = &arr[i];
    *(ap) += k;
    printf("arr[%d] = %d\n", i, arr[i]);
}