#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void)
{

    int score;
    char grade;

    while (1)
    {
        printf("\n시험 점수>> ");
        scanf("%d", &score);
        if (score == -1)
        {
            printf("종료합니다.\n");
            break;
        }

        switch (score / 10)
        {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'B';
            break;
        case 8:
            grade = 'C';
            break;
        default:
            grade = 'D';
            break;
        }
        printf("%c입니다.\n", grade);
    }
}
