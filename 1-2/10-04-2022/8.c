#include <stdio.h>
typedef struct puppy_t PUPPY;

struct puppy_t {
    char name[20];
    char breed[20];
    int age;
    double weight;
};

void print_puppy(PUPPY);

void print_puppy(PUPPY profile) {
    printf("이름 = %s\n", profile.name);
    printf("견종= %s\n", profile.breed);
    printf("나이 = %d살\n", profile.age);
    printf("몸무게 = %.2f kg\n", profile.weight);
    printf("\n");
}

PUPPY input_puppy(void) {
    PUPPY new_puppy = {0};
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
    PUPPY arongi = {"아롱이", "진도", 2, 3.7};
    PUPPY silver = {"실버", "시고르자브", 4, 2.3};

    print_puppy(arongi);
    print_puppy(silver);

    PUPPY new_puppy = input_puppy();
    print_puppy(new_puppy);
    printf("\n");
}