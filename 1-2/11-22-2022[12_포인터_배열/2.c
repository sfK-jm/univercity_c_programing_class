#include <stdio.h>

int main() {
    int arr1[4] = {-1, -2, -3, -4};
    int arr2[4] = {0, 1, 2, 3};
    int arr3[4] = {1, 10, 100, 1000};
    int *parr[3] = {arr1, arr2, arr3};

    printf("%u\n", (unsigned int)parr[0]);
    printf("%u\n", (unsigned int)parr[1]);
    printf("%u\n", (unsigned int)parr[2]);
}