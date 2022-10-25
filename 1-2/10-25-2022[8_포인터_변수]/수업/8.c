#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ip;

    for (int i = 0; i < 5; i++) {
        ip = &arr[i];
        printf("%d ", *ip);
    }
    printf("\n");
}