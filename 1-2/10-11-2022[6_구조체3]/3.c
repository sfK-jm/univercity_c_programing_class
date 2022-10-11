#include <stdio.h>

struct point_t {
    int x, y;
};

int main(void) {
    struct point_t P1 = {1, 1};
    struct point_t P2 = {3, 5};
    struct point_t P3 = {5, 2};

    printf("%.2f, %.2f", ((float)P1.x + P2.x + P3.x) / 3,
           ((float)P1.y + P2.y + P3.y) / 3);
}