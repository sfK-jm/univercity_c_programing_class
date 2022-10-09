#include <stdio.h>

int main() {
    int scores[15] = {5,  23, 100, 95, 80, 77, 69, 85,
                      92, 98, 54,  62, 90, 76, 85};
    int hist[11] = {0};

    for (int i = 0; i < sizeof(scores) / sizeof(int); i++) {
        int range_index = scores[i] / 10;
        hist[range_index]++;
    }

    for (int i = 0; i < sizeof(hist) / sizeof(int); i++) {
        if (i == 10) {
            printf("  100 : ");
        } else {
            printf("%2d~%2d : ", i * 10, (i + 1) * 10 - 1);
        }

        for (int j = 0; j < hist[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
