#include <stdio.h>

int main() {
    int age[1000];         // 1000 명의 나이를 저장
    double average[100];   // 100개의 평균값을 저장
    char name[10];         // 10개의 문자를 저장
    char string[10][100];  // 10개의 문자열을 저장
    int score[30][5];      // 30명의 5과목 점수
    double wha[7][30][3];  // 7개의 반 x 30명의 키, 몸무게, 나이

    printf("%lu\n", sizeof(age));
    printf("%lu\n", sizeof(average));
    printf("%lu\n", sizeof(name));
    printf("%lu\n", sizeof(string));
    printf("%lu\n", sizeof(score));
    printf("%lu\n", sizeof(wha));
}