// 5개의 문자열을 입력 받아 배열에 저장한 후 출력
#include <stdio.h>

int main(void) {
    char animal[5][50] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%s", animal[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n", animal[i]);
    }
}