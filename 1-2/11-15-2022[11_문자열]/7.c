// 문자 배열을 아래와 같이 선언했을 때, 문자열의 길이를 모른다고 가정했을때 앞의
// 예제를 while문으로 바꾸시오 char word[] = "Arent you hungry?";

#include <stdio.h>

int main() {
    char word[] = "Aren't you hungry?";
    int i = 0;
    while (word[i] != '\0') {
        printf("%c", word[i]);
        i++;
    }
}