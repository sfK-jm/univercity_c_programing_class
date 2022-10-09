// 배열을 초기화하지 않고 원소들을 직접 입력 받는 input_array() 함수를 추가
#include <stdio.h>

void input_array(int[], int);
void print_array(int[], int);
// void print_array(int a[], int size);

void input_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main() {
    int intarray[5] = {0};
    print_array(intarray, 5);
    input_array(intarray, 5);
    print_array(intarray, 5);
    return 0;
}