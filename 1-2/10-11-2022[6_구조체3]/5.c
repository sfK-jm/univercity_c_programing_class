#include <stdio.h>

typedef struct {
    char name[50];
    int birth_year;
    double height, weight;
} PROFILE;

void print_profile(PROFILE);

void print_profile(PROFILE profile) {
    printf("이름 = %s\n", profile.name);
    printf("생년 = %d\n", profile.birth_year);
    printf("키 = %.2f cm\n", profile.height);
    printf("몸무게 = %.2f kg\n", profile.weight);
    printf("\n");
}

int main(void) {
    PROFILE profile_arr[3] = {
        {"박보영", 1990, 157.0, 41.0}, {"차은우", 1997, 183.0, 70.0}, {0}};
    for (int i = 0; i < 3; i++) {
        print_profile(profile_arr[i]);
    }
    return 0;
}