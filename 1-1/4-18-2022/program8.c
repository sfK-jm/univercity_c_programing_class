#include <stdio.h>

int main(void) {
    char str[100];
    
    printf("문자열 입력>> ");
    scanf("%s", str );
    
    printf("문자 배열 str에 저장된 문자열은 : %s\n", str);
    return 0;
}