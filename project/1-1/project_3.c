#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    while (1) {
        int computer, user;
        int num = 0;

        while (num == 0) {
            printf("가위(1) 바위(2) 보(3)>> ");
            scanf("%d", &user);
            if (user == 1) {
                printf("player: 가위(1)\n");
                num = 1;
            } else if (user == 2) {
                printf("player: 바위(2)\n");
                num = 1;
            } else if (user == 3) {
                printf("player: 보(3)\n");
                num = 1;
            } else {
                printf("다시 입력하세요\n");
                printf("\n");
                num = 0;
            }
        }

        srand((unsigned int)time(NULL));

        computer = rand() % 3 + 1;
        if (computer == 1) {
            printf("Computer: 가위(1)\n");
        } else if (computer == 2) {
            printf("Computer: 바위(2)\n");
        } else {
            printf("Computer: 보(3)\n");
        }

        if (user == computer) {
            printf("비겼습니다\n");
        } else if (user == 1 && computer == 2) {
            printf("computer가 이겼습니다.\n");
        } else if (user == 1 && computer == 3) {
            printf("player 가 이겼습니다.\n");
        } else if (user == 2 && computer == 1) {
            printf("player가 이겼습니다.\n");
        } else if (user == 2 && computer == 3) {
            printf("computer가 이겼습니다.\n");
        } else if (user == 3 && computer == 1) {
            printf("computer가 이겼습니다.\n");
        } else if (user == 3 && computer == 2) {
            printf("player가 이겼습니다.\n");
        }

        printf("\n");
    }

    return 0;
}
