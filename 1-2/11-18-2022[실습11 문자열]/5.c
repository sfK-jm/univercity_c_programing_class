#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char shesgone[] =
        "Lady wont you save me My heart belongs to you Lady can you forgive me "
        "For all Ive done to you Lady oh lady";
    char dict[50][100] = {0};
    int wcnt = 0;
    int wlen = 0;

    int i = -1;
    char ch;
    do {
        i++;
        ch = shesgone[i];

        if (ch == ' ' || ch == '\0') {
            dict[wcnt][wlen] = '\0';
            wlen = 0;
            wcnt++;
        } else {
            wlen++;
            dict[wcnt][wlen - 1] = ch;
        }
    } while (ch != '\0');

    // 5-1 전부 출력
    for (int i = 0; i < wcnt; i++) {
        printf("%s\n", dict[i]);
    }
    printf("%d words\n", wcnt);

    // 5-2) 한번씩만 출력
    int n_dup = 0;

    for (int i = 0; i < wcnt; i++) {
        char *word = dict[i];

        bool is_new = true;

        for (int j = 0; j < i; j++) {
            if (strncmp(word, dict[j], 100) == 0) {
                n_dup++;
                is_new = false;
                break;
            }
        }
        if (is_new) {
            printf("%s\n", dict[i]);
        }
    }
    printf("%d words\n", wcnt - n_dup);
}