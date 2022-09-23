#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize(int[], int, int, int);

// 배열 arr[]을 [min_valude, max_value] 범위의 난수로 채움
void initalize(int arr[], int size, int min_value, int max_value) {
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max_value - min_value + 1) + min_value;
    }
}

int main() {
    int nums[100] = {0};     // 100개의 난수 저장
    int multiple[10] = {0};  // 배수가 몇번 나왔는지 세기
    int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    initalize(nums, 100, 0, 1000);
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 10; j++) {
            if (nums[i] % primes[j] == 0) {
                multiple[j]++;
            } else {
                continue;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d의 배수: %d개\n", primes[i], multiple[i]);
    }
    return 0;
}