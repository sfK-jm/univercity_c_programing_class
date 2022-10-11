#include <math.h>
#include <stdio.h>

typedef struct {
    int x, y;
} point_t;

double distance(point_t, point_t);

int main(void) {
    point_t P1 = {1, 1};
    point_t P2 = {3, 5};
    point_t P3 = {5, 2};

    double p1p2 = distance(P1, P2);
    double p2p3 = distance(P2, P3);
    double p3p1 = distance(P3, P1);

    printf("P1 ~ P2 = %.2lf\n", p1p2);
    printf("P2 ~ P3 = %.2lf\n", p2p3);
    printf("P3 ~ P1 = %.2lf\n", p3p1);
}

double distance(point_t POINT1, point_t POINT2) {
    return sqrt(pow(POINT1.x - POINT2.x, 2) + pow(POINT1.y - POINT2.y, 2));
}