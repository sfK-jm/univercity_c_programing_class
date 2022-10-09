// 구조체

#include <stdio.h>

struct profile_t {
    char name[20];
    int birth_year;
    double height, weight;
};

int main(void) {
    struct profile_t bypark = {"박보영", 1990, 157.0, 41.0};

    bypark.height = 158.9;

    printf("이름 = %s\n", bypark.name);
    printf("생년 = %d\n", bypark.birth_year);
    printf("키 = %.2f cm\n", bypark.height);
    printf("몸무게 = %.2f kg\n", bypark.weight);
    printf("\n");
    return 0;
}
