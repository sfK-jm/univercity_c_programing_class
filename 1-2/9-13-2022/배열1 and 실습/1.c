// 실습문제 1 : 배열 기초
// 
// 키보드로 5명의 키를 입력 받아 배열에 저장한다
// 키는 cm 단위로 입력된다
// 1. 입력받은 5명의 키를 출력해보자 (소수점 이하 1자리까지 출력)
// 2. 5명의 키를 미터 단위로 바꿔서 출력 (소수점 이하 3자리 까지 출력)
// 3. 5명의 키를 인치 단위로 바꿔서 출력 (1cm = 0.394inch, 소수점 3자리까지 출력)
// 167.5 189.0 169.9 175.6 158.2


#include <stdio.h>

int main()
{
    double height[5] = {0};

    // 키 입력받기
    printf("5명의 키를 입력하세요(cm)>>");
    for (int i = 0; i< 5; i++)
    {
        scanf("%lf", &height[i]);
    }

    // 1번 출력
    printf("1) 5명의 키(cm): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1lf ", height[i]);
    }

    printf("\n");

    // 2번 출력
    printf("2) 5명의 키(m): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.3lf ", height[i] / 100);
    }

    printf("\n");

    // 3번 출력
    printf("3) 5명의 키(inch): ");
    for (int i = 0; i < 5; i++ )
    {
        printf("%.3lf ", height[i] * 0.394);
    }

    return 0;
}