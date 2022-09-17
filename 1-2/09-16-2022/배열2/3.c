// 앞의 프로그램에서 메인 함수에서 k를 입력 받은 후
// 배열 원소들의 값을 각각 k만큼 증가시키는 increase_array() 함수를 추가

#include <stdio.h>

void input_array(int[], int);
void print_array(int[], int);
void increase_array(int[], int, int);
int array_max(int[], int);

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

void increase_array(int a[], int size, int k) {
    for (int i = 0; i < size; i++) {
        a[i] += k;
    }
}

int array_max(int a[], int size) {
    int big_num = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > big_num) {
            big_num = a[i];
        } else {
            continue;
        }
    }
    return big_num;
}

int main() {
    int intarray[5] = {0};
    int k;
    print_array(intarray, 5);
    input_array(intarray, 5);
    print_array(intarray, 5);

    int max_elm = array_max(intarray, 5);
    printf("max = %d\n", max_elm);
    printf("k = ");
    scanf("%d", &k);
    increase_array(intarray, 5, k);
    print_array(intarray, 5);
    return 0;
}