#include <stdio.h>

int main(void) {
    int x[3] = {1, 3, 5};
    int y[3] = {1, 5, 2};

    for (int i = 0; i < 3; i++) {
        printf("P%d의 좌표 = (%d, %d)\n", i + 1, x[i], y[i]);
    }
    return 0;
}