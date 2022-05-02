#include <stdio.h>

int main(void)
   {
        printf("\n=============실습1=============\n");

        // 입력
        int x = 100, y = 200, tmp;
        printf("초기값: x=%d, y=%d\n", x, y);

        // 계산
        tmp = x;
        x = y;
        y = tmp;

        // 출력
        printf("교화 후: x=%d, y=%d\n", x, y);
        return 0;
    }
