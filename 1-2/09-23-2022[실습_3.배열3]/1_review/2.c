// 부분배열과 함수
// 학생 3명과 4과목 점수가 주어졌을 때, 각 학생의 총점을 출력하는 프로그램

#include <stdio.h>

int get_total(int[], int);

int get_total(int student[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += student[i];
    }
    return sum;
}

int main() {
    int score[3][4] = {{100, 95, 72, 88}, {86, 98, 70, 86}, {80, 71, 100, 90}};
    int total;

    for (int i = 0; i < 3; i++) {
        total = get_total(score[i], 4);
        printf("학생 %d의 총점 = %d\n", i + 1, total);
    }
    return 0;
}