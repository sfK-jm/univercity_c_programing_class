#include <stdio.h>

struct puppy_t {
    char name[20];
    char breed[20];
    int age;
    double weight;
};

int main(void) {
    struct puppy_t arongi = {"아롱이", "진도", 2, 3.7};
    struct puppy_t silver = {"실버", "시고르자브", 5, 2.3};
    silver.age = 4;

    printf("이름 = %s\n", arongi.name);
    printf("견종 = %s\n", arongi.breed);
    printf("나이 = %d살\n", arongi.age);
    printf("몸무게 = %.2fkg\n", arongi.weight);
    printf("\n");

    printf("이름 = %s\n", silver.name);
    printf("견종 = %s\n", silver.breed);
    printf("나이 = %d살\n", silver.age);
    printf("몸무게 = %.2fkg\n", silver.weight);
    printf("\n");
}