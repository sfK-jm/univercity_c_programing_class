#include <stdio.h>

void print_arr(int *, int);
void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr1[4] = {-1, -2, -3, -4};
    int arr2[4] = {0, 1, 2, 3};
    int arr3[4] = {1, 10, 100, 1000};
    int *parr[3] = {arr1, arr2, arr3};
    print_arr(arr1, 4);
    print_arr(parr[0], 4);
}