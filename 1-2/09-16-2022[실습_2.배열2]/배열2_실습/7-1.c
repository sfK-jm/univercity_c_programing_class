#include <stdio.h>

void print_score(int arr[][4], int row, int column) {
    int score = 0;
    printf("학생 %d의 총점 = ", row + 1);
    for (int i = row; i < row + 1; i++) {
        for (int j = 0; j < column; j++) {
            score += arr[i][j];
        }
    }
    printf("%d\n", score);
}

int main() {
    int student_socre[3][4] = {100, 95, 72, 88, 86,  98,
                               70,  86, 80, 71, 100, 90};
    print_score(student_socre, 0, 4);
    print_score(student_socre, 1, 4);
    print_score(student_socre, 2, 4);
}