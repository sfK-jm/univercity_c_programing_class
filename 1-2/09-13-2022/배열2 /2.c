#include <stdio.h>

int main(void) {
    int score[3][4];

    for (int i = 0; i < 3; i++) {
        printf("학생%d의 네 과목 점수>> ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("학생 %d의 네 과목 점수: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }
}