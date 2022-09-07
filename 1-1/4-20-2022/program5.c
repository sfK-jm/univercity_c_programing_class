#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    char ch, ch_new;

    for (int i = 1; i <= 4; i++)
    {
        printf("알파벳 입력>> ");
        scanf("%c", &ch);
        getchar();

        if ('A' <= ch && ch <= 'Z')
        {
            ch_new = ch + 32;
            // ch_new = ch + ('a' - 'A');
        }
        else
        {
            ch_new = ch - 32;
            // ch_new = ch - ('a' - 'A');
        }

        printf("%c -> %c\n", ch, ch_new);
    }
}