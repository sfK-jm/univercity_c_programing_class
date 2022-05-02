#include <stdio.h>
 int mian()
 {
        printf("\n=============실습4=============\n");

        // 입력
        int width, height, area_tri, area_rect;

        printf("너비(밑변)의 길이는 얼마입니까? ");
        scanf("%d", &width);

        printf("높이는 얼마입니까? ");
        scanf("%d", &height);

        // 계산
        area_tri = width * height / 2;
        area_rect = width * height;

        // 출력
        printf("밑변이 %d, 높이가 %d인 삼각형의 넓이는 %d입니다.\n", width, height, area_tri);
        printf("밑변이 %d, 높이가 %d인 사각형의 넓이는 %d입니다.\n", width, height, area_rect);
    }