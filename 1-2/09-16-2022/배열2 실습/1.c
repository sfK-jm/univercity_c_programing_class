#include <stdio.h>

void gap() { printf("\n"); }

int main(void) {
    int arr[] = {3, 1, 2, 7, 5};

    // 1번 출력
    printf("1) scan: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    gap();

    // 2번 출력
    printf("2) reverse: ");

    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    gap();

    // 3번 문제
    printf("3) elements in even indices: ");
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) {
            continue;
        }

        else {
            printf("%d ", arr[i]);
        }
    }

    gap();

    // 4번 문제
    printf("search: x = ");
    int num;
    scanf("%d", &num);
    for (int i = 0; i < 5; i++) {
        if (num == arr[i]) {
            printf("%d is in arr", num);
        } else {
            printf("%d is not found", num);
        }
    }
}