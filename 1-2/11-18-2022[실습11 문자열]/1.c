// 두개의 문자열1 문자열 2를 입력 받는다
// 두 문자열이 같다면 equal 출력
// 다르면 둘을 붙혀서 출력

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    printf("문자열 1 >> ");
    scanf("%s", str1);
    printf("문자열 2 >> ");
    scanf("%s", str2);
    if (!strcmp(str1, str2)) {
        printf("%s equals to %s\n", str1, str2);
    } else {
        strcat(str1, str2);
        printf("%s", str1);
    }
}