#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
    char answer;
    while (1)
    {
        printf("계속하시겠습니까(Y/N)?");
        scanf("%c", &answer);
        getchar();

        switch (answer)
        {
        case 'Y':
        case 'y':
            printf("게임을 다시 시작합니다.\n");
            exit(0);
        case 'N':
        case 'n':
            printf("게임을 종료합니다.\n");
            exit(0);
        default:
            printf("다시 입력하세요.\n");
            break;
        }
    }
}
