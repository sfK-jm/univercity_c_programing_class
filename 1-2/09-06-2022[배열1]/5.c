// 학생 10명의 국어 점수를 입력받아 저장한 후, 총점과 평균을 구하라
#include <stdio.h>
int main(void) {
    int score[10] = {0};
    int sum;
    double avg;

    printf("10명의 국어 점수>> ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }

    sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += score[i];
    }

    avg = sum / 10.0;
    printf("총점, 평균 = %d, %.2f", sum, avg);
    return 0;
}