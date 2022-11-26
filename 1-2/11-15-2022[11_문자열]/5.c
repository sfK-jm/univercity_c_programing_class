// 문자들로 문자열을 직접만드는 예제
#include <stdio.h>

int main(void) {
    char word[50];
    word[0] = 'L';
    word[1] = 'o';
    word[2] = 'v';
    word[3] = 'e';
    word[4] = '\0';

    printf("%s\n", word);
}