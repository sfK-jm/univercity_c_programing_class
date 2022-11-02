#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, k;
    int *p_i = &i;
    int *p_k = &k;
    printf("i k = ");
    scanf("%d%d", &i, &k);
    arr[*p_i] += *p_k;
    printf("arr[%d] = %d\n", i, arr[i]);
}