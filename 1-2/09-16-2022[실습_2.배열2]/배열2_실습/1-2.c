#include <stdio.h>

void gap() { printf("\n"); }
int odd_num = 0;

int main(void) {
    int arr[5] = {3, 1, 2, 7, 5};

    // arr의 원소중 홀수가 몇 개인지 출력
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 1) {
            odd_num++;
        } else {
            continue;
        }
    }
    printf("5) count: %d odd numbers", odd_num);

    gap();

    // arr의 원소중 3보다 큰 값만 출력
    printf("6) filter: elements s.t.> 3: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 3) {
            printf("%d ", arr[i]);
        } else {
            continue;
        }
    }

    gap();

    // arr이 각 원소에 *2한 값들을 출력
    printf("7) map: 'arr' doubled : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i] * 2);
    }

    gap();

    // 키보드로 정수 x를 입력받고 arr 원조 중에 x가 있으면
    // 해당 원소를 1 증가 시켜 다시 저장한 후 arr 전체를 출력

    int x = 0;
    printf("update: x = ");
    scanf("%d", &x);
    printf("   5 in 'arr' increased by 1: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            arr[i]++;
            printf("%d ", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
}