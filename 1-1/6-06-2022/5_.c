#include <stdio.h>

int main()
{
    int kor , eng , math ;
    printf("국어, 영어, 수학 점수를 입력하세요>> ");
    scanf("%d%d%d", &kor, &eng, &math);
    int tot = kor + eng + math;
    double tot_d = tot;
    double avg = tot_d / 3;
    printf("총점은 %d, 평균은 %.2f점 입니다\n", tot, avg);
}