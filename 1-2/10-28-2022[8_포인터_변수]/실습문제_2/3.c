#include <stdio.h>

typedef struct {
    char name[20];
    int birth_year;
    double height, weight;
} PROFILE;

int main(void) {
    PROFILE bypark = {"박보영", 1990, 157.0, 41.0};
    int *p_birth_year = &bypark.birth_year;
    double *p_height = &bypark.height;
    double *p_weight = &bypark.weight;
    printf("%d\n%.1lf\n%.1lf\n", *p_birth_year, *p_height, *p_weight);
}