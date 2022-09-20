// .4.c에서 학생별로 가장 잘한 과목의 점수를 리턴하는 get_best()함수를 만들고
// 출력해라

#include <stdio.h>

int get_total(int[], int);
int get_best(int[], int);

int get_total(int student[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += student[i];
    }
    return sum;
}

int get_best(int student[], int size) {
    int best_score = 0;
    for (int i = 0; i < size; i++) {
        if (best_score < student[i]) {
            best_score = student[i];
        } else {
            continue;
        }
    }
    return best_score;
}

int main(void) {
    int score[3][4] = {{100, 95, 72, 88}, {86, 98, 70, 86}, {80, 71, 100, 90}};
    int total;
    int best;

    for (int i = 0; i < 3; i++) {
        total = get_total(score[i], 4);
        best = get_best(score[i], 4);
        printf("학생%d의 총점 = %d, 가장 높은 과목의 점수 = %d\n", i + 1, total,
               best);
    }
    return 0;
}