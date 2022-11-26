// 문자들로 문자열을 직접 만든는 예제
#include <stdio.h>

int main(void) {
    char word[50] = "Aren't you hungry?";
    for (int i = 0; i < 50; i++) {
        printf("%c", word[i]);
    }
}