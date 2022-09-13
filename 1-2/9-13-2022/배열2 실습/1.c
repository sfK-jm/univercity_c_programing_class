#include <stdio.h>

int main(void)
{
    int score[4];

    printf("학생1의 네 과목 점수>> ");
    for (int j = 0; j < 4; j++)
    {
        scanf("%d", &score[j]);
    }

    printf("학생1의 네 과목 점수: ");
    for (int j = 0; j < 4; j++)
    {
        printf("%d ", score[j]);
    }
    return 0;
}