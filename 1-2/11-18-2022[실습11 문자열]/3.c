#include <stdio.h>
#include <string.h>

int mystrlen(char *);

int mystrlen(char *str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    /*
    int len = 0;
    while(*str)
    */
    return len;
}

int main() {
    char words[5][50] = {"My", "heart", "belongs", "to", "you"};
    int maxlen = 0, idx = -1;

    /*
    for (int i = 0; i < 5; i++) {
        //printf("%s %d\n", words[i], strlen(words[i]));
        printf("%s %d\n", words[i], mystrlen(words[i]));
    }
    */

    /*
    for (int i = 0; i < 5; i++) {
        int len = mystrlen(words[i]);
        if (maxlen < len) {
            maxlen = len;
            idx = i;
        }
    }
    printf("%s %d\n", words[idx], maxlen);
    */

    // 포인터로 배열을 직접 가르키는 방법
    char *longest = NULL;
    for (int i = 0; i < 5; i++) {
        int len = mystrlen(words[i]);
        if (maxlen < len) {
            maxlen = len;
            longest = words[i];
        }
    }
    printf("%s %d\n", longest, maxlen);
}