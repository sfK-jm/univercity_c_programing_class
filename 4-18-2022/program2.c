#include <stdio.h>

int main(void) {
    
    char x;
    printf("문자 하나를 입력하세요>> ");
    scanf("%c", &x);
    
    printf("문자 %c의 아스키 코드는 %d입니다\n", x, x);
}