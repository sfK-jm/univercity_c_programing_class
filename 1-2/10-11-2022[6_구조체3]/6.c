#include <stdio.h>

typedef struct {
    char name[50];
    char breed[50];
    int age;
    double weight;
} PUPPY;

int main(void) {
    PUPPY puppy_arr[3] = {
        {"아롱이", "진도", 2, 3.7}, {"실버", "시고르자브", 5, 2.3}, {0}};

    printf("이름 = ");
    scanf("%s", puppy_arr[2].name);
    printf("견종 = ");
    scanf("%s", puppy_arr[2].breed);
    printf("나이 = ");
    scanf("%d", &puppy_arr[2].age);
    printf("몸무게(kg) = ");
    scanf("%lf", &puppy_arr[2].weight);

    printf("\n");

    printf("이름 = %s\n", puppy_arr[2].name);
    printf("견종 = %s\n", puppy_arr[2].breed);
    printf("나이 = %d\n", puppy_arr[2].age);
    printf("몸무게 = %.1lf\n", puppy_arr[2].weight);

    return 0;
}