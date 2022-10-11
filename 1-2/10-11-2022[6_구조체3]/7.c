#include <stdio.h>

typedef struct {
    char name[50];
    char breed[50];
    int age;
    double weight;
} PUPPY;

PUPPY input_puppy(void);
void print_puppy(PUPPY);

int main(void) {
    PUPPY puppy_arr[3] = {
        {"아롱이", "진도", 2, 3.7}, {"실버", "시고르자브", 5, 2.3}, {0}};

    puppy_arr[2] = input_puppy();
    print_puppy(puppy_arr[2]);

    return 0;
}

PUPPY input_puppy(void) {
    PUPPY puppy_t;
    printf("이름 = ");
    scanf("%s", puppy_t.name);
    printf("견종 = ");
    scanf("%s", puppy_t.breed);
    printf("나이 = ");
    scanf("%d", &puppy_t.age);
    printf("몸무게(kg) = ");
    scanf("%lf", &puppy_t.weight);

    return puppy_t;
}

void print_puppy(PUPPY puppy) {
    printf("\n");

    printf("이름 = %s\n", puppy.name);
    printf("견종 = %s\n", puppy.breed);
    printf("나이 = %d\n", puppy.age);
    printf("몸무게 = %.1lf\n", puppy.weight);
}