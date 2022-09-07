// 실습문제 6: 총점 구하기
#include <stdio.h>

int main()
{
    int student_num, subject, score, total_score;
    printf("학생수 과목 개수 = ");
    scanf("%d%d", &student_num, &subject);
    for (int i = 1; i <= student_num; i++)
    {
        total_score = 0;

        for (int j = 1; j <= subject; j++)
        {
            printf("학생%d의 과목%d 점수 = ", i, j);
            scanf("%d", &score);
            total_score = total_score + score;
        }

        printf("총점 = %d/%d\n", total_score, subject * 100);
        printf("\n");
    }
}