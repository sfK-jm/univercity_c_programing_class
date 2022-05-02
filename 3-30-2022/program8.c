#include <stdio.h>

int main()
{
    int score, absent;

    printf("시험 점수 결석일수 >> ");
    scanf("%d%d", &score, &absent);
    if ((score >= 80 || absent == 0) || (score >= 60 && absent <= 5))
    {
        printf("S\n");
    }
    else
    {
        printf("U\n");
    }
}