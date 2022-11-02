#include <stdio.h>

int main(void) {
    int age = 25;
    double height = 182.5, weight = 72.3;
    int *p_age = &age;
    double *p_height = &height;
    double *p_weight = &weight;

    printf("age = %d height = %.2f, weight = %.2f\n", *p_age, *p_height,
           *p_weight);
}