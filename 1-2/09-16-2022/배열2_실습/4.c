#include <stdio.h>

#define SIZE 5

void array_copy(int[], int[], int);

void array_copy(int a1[], int a2[], int size) {
    for (int i = 0; i < size; i++) {
        a2[i] = a1[i];
    }
}

int main(void) {
    int arr1[SIZE] = {4, 12, 7, 0, 9};
    int arr2[SIZE] = {0};
    array_copy(arr1, arr2, SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
}
