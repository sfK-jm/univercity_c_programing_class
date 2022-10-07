
#include <stdio.h>

struct profile_t {
    char name[20];
    int birth_year;
    double height, weight;
};

void print_profile(struct profile_t);

void print_profile(struct profile_t profile) {
    printf("이름 = %s\n", profile.name);
    printf("생년 = %d\n", profile.birth_year);
    printf("키 = %.2f cm\n", profile.height);
    printf("몸무게 = %.2f kg\n", profile.weight);
    printf("\n");
}

int main(void) {
    struct profile_t bypark = {"박보영", 1990, 157.0, 41.0};

    struct profile_t ewcha = {"차은우", 1987, 183.0, 70.0};

    bypark.height = 158.9;
    ewcha.birth_year = 1997;

    print_profile(bypark);
    print_profile(ewcha);
    return 0;
}
