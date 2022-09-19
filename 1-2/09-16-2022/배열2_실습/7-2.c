#include <stdio.h>
int total_student_socre[3];
void print_score(int arr[][4], int row, int column) {
    int score = 0;
    printf("학생 %d의 총점 = ", row + 1);
    for (int i = row; i < row + 1; i++) {
        for (int j = 0; j < column; j++) {
            score += arr[i][j];
        }
    }
    printf("%d\n", score);
    total_student_socre[row] = score;
}

int main() {
    int student_socre[3][4] = {100, 95, 72, 88, 86,  98,
                               70,  86, 80, 71, 100, 90};
    int best_score = 0;
    print_score(student_socre, 0, 4);
    print_score(student_socre, 1, 4);
    print_score(student_socre, 2, 4);
    for (int i = 0; i < 3; i++) {
        if (total_student_socre[i] > best_score) {
            best_score = total_student_socre[i];
        } else {
            continue;
        }
    }
    if (best_score == total_student_socre[0])
        printf("최우수상: 학생 1");
    else if (best_score == total_student_socre[1]) {
        printf("최우우상: 학생2");
    } else {
        printf("최우수상: 학생3");
    }
}