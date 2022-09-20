// 1차원 배열의 크기
#include <stdio.h>

int main(void) {
    int nums[5];

    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(nums[0]));
    printf("%lu\n", sizeof(nums));
    printf("%lu\n", sizeof(int) * 5);
    printf("%lu\n", sizeof(nums[0]) * 5);

    int array_size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", array_size);
    return 0;
}