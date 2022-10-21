// 5명의 성적을 입력받아 배열에 저장하고 5명의 각각의 성적,  총점 , 평균을
// 출력하시오

#include <stdio.h>

int main(void) {
    int score[5];

    for (int i = 0; i < 5; i++) {
        printf("%d번 학생의 성적 = ", i + 1);
        scanf("%d", &score[i]);
    }

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }

    double avg = sum / 5.0;

    printf("5명의 성적");
    for (int i = 0; i < 5; i++) {
        printf("%d ", score[i]);
    }

    printf("\n");
    printf("총점: %d\n", sum);
    printf("평균: %.2f\n", avg);
}