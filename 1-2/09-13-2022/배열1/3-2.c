#include <stdio.h>

int main() {
    double height[5] = {0};
    double weight[5] = {0};
    double bmi[5] = {0};
    int k;
    double bmi2[4] = {0};

    printf("5명의 키를 입력하세요(cm)>> ");
    for (int i = 0; i < sizeof(height) / sizeof(double); i++) {
        scanf("%lf", &height[i]);
    }

    printf("5명의 몸무게를 입력하세요(kg)>> ");
    for (int i = 0; i < sizeof(height) / sizeof(double); i++) {
        scanf("%lf", &weight[i]);
    }

    for (int i = 0; i < sizeof(height) / sizeof(double); i++) {
        double height_m = height[i] / 100;
        bmi[i] = weight[i] / (height_m * height_m);
    }
    printf("\n5명의 BMI: ");
    for (int i = 0; i < sizeof(height) / sizeof(double); i++) {
        printf("%.1f ", bmi[i]);
    }
    printf("\n");

    printf("k = ");
    scanf("%d", &k);

    int cnt = 0;
    for (int i = 0; i < sizeof(height) / sizeof(double); i++) {
        if (i == k) continue;

        bmi2[cnt] = bmi[i];
        cnt++;
    }

    printf("%d번을 뺀 4 명의 BMI: ", k);
    for (int i = 0; i < sizeof(bmi2) / sizeof(double); i++) {
        printf("%.1f ", bmi2[i]);
    }
    printf("\n");
}

// 첫째줄 입력 예) 167.5 189.0 169.9 175.6 158.2
// 둘째줄 입력 예) 55.3 81.6 73.2 68.0 49.8

// 출력 예 19.7 22.8 25.4 22.1 19.9

// k 입력 예) 1
// 출력 예) 1번을 뺀 4명의 BMI: 19.7 25.4 22.1 19.9