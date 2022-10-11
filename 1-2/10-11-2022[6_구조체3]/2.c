#include <stdio.h>

struct point_t {
    int x, y;
};

int main(void) {
    struct point_t P1 = {1, 1};
    struct point_t P2 = {3, 5};
    struct point_t P3 = {5, 2};

    printf("P1의 좌표 = (%d, %d)\n", P1.x, P1.y);
    printf("P2의 좌표 = (%d, %d)\n", P2.x, P2.y);
    printf("P3의 좌표 = (%d, %d)\n", P3.x, P3.y);
}