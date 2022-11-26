#include <stdio.h>

int main() {
    double w = 87.6, x = 5.5, y = 100.0, z = 23.7;
    double* points[4] = {&w, &x, &y, &z};
    for (int i = 0; i < 4; i++) {
        printf("%.1f ", *points[i]);
    }
    printf("\n");

    double* tmp;
    tmp = points[0];
    points[0] = points[1];
    points[1] = tmp;
    tmp = points[2];
    points[2] = points[3];
    points[3] = tmp;
    tmp = points[1];
    points[1] = points[2];
    points[2] = tmp;
    for (int i = 0; i < 4; i++) {
        printf("%.1f ", *points[i]);
    }
    printf("\n");
}
