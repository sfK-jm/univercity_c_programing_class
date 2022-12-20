#include <stdio.h>
#include <stdlib.h>

int *get_new_arr() {
    int *arr = (int *)malloc(sizeof(int) * 3);
    if (!arr) return NULL;  // arr == 0 이나 arr == NULL과 같다
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    return arr;
}

int main(void) {
    int *arr = get_new_arr();
    if (arr != NULL) {
        printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        free(arr);
    }
}