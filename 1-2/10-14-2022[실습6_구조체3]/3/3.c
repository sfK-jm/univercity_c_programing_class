#include <math.h>
#include <stdio.h>

typedef struct {
    int x, y;
} POINT;

double get_distance(POINT, POINT);

double get_distance(POINT p1, POINT p2) {
    double disff_x = p1.x - p2.x;
    double disff_y = p1.y - p2.y;
    double dist = sqrt(disff_x * disff_x + disff_y * disff_y);
    return dist;
}
int main(void) {
    POINT points[10] = {{0, 0},    {3, 3},    {12, -5}, {6, 1},  {38, -4},
                        {10, -10}, {25, -12}, {33, 21}, {-5, 7}, {-10, -10}};

    double longest = 0;
    int idx1, idx2;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            double dist = get_distance(points[i], points[j]);
            printf("(%d, %d) - (%d, %d) : %.2lf\n", points[i].x, points[i].y,
                   points[j].x, points[j].y, dist);

            if (longest < dist) {
                longest = dist;
                idx1 = i;
                idx2 = j;
            }
        }
    }
    printf("Longest: (%d, %d) - (%d, %d) : %.2lf", points[idx1].x,
           points[idx1].y, points[idx2].x, points[idx2].y, longest);
}