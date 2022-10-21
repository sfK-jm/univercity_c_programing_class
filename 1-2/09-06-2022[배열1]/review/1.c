// 학생 3명의 국어 점수를 입력 받아 저장한 후, 총점과 평균을 구하는 프로그램
#include <stdio.h>

int main(void) {
    int score1, score2, score3;
    int sum;
    double avg;

    printf("3명의 국어 점수 >> ");
    scanf("%d%d%d", &score1, &score2, &score3);

    sum = score1 + score2 + score3;
    avg = sum / 3.0;

    printf("총점 , 평균 = %d, %.2f\n", sum, avg);
    return 0;
}