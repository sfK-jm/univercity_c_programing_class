#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{

    char ch;
    printf("****를 맞춰 보세요.\n");
    while (1)
    {
        printf("\n알파벳 소문자>> ");
        scanf("%c", &ch);
        getchar();

        switch (ch)
        {
        case 'p':
        case 'l':
        case 'a':
        case 'y':
            printf("%c이(가) 있습니다.\n", ch);
            break;
        case '@':
            printf("영어 단어는 [play] 입니다.\n");
            break;
        default:
            printf("%c은(는) 없습니다.\n", ch);
        }
    }
}