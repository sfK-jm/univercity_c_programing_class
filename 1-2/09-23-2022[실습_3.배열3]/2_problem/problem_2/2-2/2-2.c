#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_ROLL 10

void initialize(int[], int, int, int);

// 배열 arr[]을 [min_valude, max_value] 범위의 난수로 채움
void initalize(int arr[], int size, int min_value, int max_value) {
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max_value - min_value + 1) + min_value;
    }
}

int main(void) {
    int dice_roll[N_ROLL] = {0};

    initalize(dice_roll, N_ROLL, 1, 6);

    printf("rolls: ");
    for (int i = 0; i < N_ROLL; i++) {
        printf("%d ", dice_roll[i]);
    }
    printf("\n");

    for (int i = 1; i <= 6; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (dice_roll[j] == i) {
                count++;
            } else {
                continue;
            }
        }
        printf("%d: %d times\n", i, count);
    }
    return 0;
}