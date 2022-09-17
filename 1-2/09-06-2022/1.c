#include <stdio.h>

int main(void) {
    int score[3], sum;
    double avg;

    score[0] = 100;
    score[1] = 80;
    score[2] = 95;

    sum = score[0] + score[1] + score[2];
    avg = sum / 3.0;
    printf("총점, 평균 = %d, %.2f\n", sum, avg);
    return 0;
}