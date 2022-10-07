#include <stdio.h>

struct puppy_t {
    char name[20];
    char breed[20];
    int age;
    double weight;
};

void print_puppy(struct puppy_t);

void print_puppy(struct puppy_t profile) {
    printf("이름 = %s\n", profile.name);
    printf("견종= %s\n", profile.breed);
    printf("나이 = %d살\n", profile.age);
    printf("몸무게 = %.2f kg\n", profile.weight);
    printf("\n");
}

struct puppy_t input_puppy(void) {
    struct puppy_t new_puppy = {0};
    printf("이름 = ");
    scanf("%s", new_puppy.name);
    printf("견종 = ");
    scanf("%s", new_puppy.breed);
    printf("나이 = ");
    scanf("%d", &new_puppy.age);
    printf("몸무게(kg) = ");
    scanf("%lf", &new_puppy.weight);
    printf("\n");
    return new_puppy;
};

int main(void) {
    struct puppy_t arongi = {"아롱이", "진도", 2, 3.7};
    struct puppy_t silver = {"실버", "시고르자브", 4, 2.3};

    print_puppy(arongi);
    print_puppy(silver);

    struct puppy_t new_puppy = input_puppy();
    print_puppy(new_puppy);
    printf("\n");
}