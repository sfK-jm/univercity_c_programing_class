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
    int nums[100] = {0};
    int multiple[21] = {0};

    initalize(nums, 100, 0, 1000);
    for (int i = 0; i < 100; i++) {
        for (int j = 2; j <= 20; j++) {
            if (nums[i] % j == 0) {
                multiple[j]++;
            } else {
                continue;
            }
        }
    }
    for (int i = 2; i <= 20; i++) {
        printf("%d의 배수: %d개\n", i, multiple[i]);
    }
    return 0;
}