#include <stdio.h>

struct game {
    int num;
    char name[20];
    int price;
    int play;
    int player[20];
};

int main(void) {
    struct game game1 = {1, "브루마블", 1000, 0, {0}};
    struct game game2 = {2, "젠가", 800, 0, {0}};

    int count_1 = 0;
    int count_2 = 0;

    int num[4];
    printf("게임 번호(4개)>> ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
        if (num[i] == 1) {
            count_1++;
            game1.play++;
        } else if (num[i] == 2) {
            count_2++;
            game2.play++;
        }
    }
    printf("플레이한 손님 ID(4명)>> ");
    for (int i = 0; i < 4; i++) {
        if (num[i] == 1) {
            scanf("%d", &game1.player[i]);
        } else if (num[i] == 2) {
            scanf("%d", &game2.player[i]);
        }
    }
    int Sales = (game1.price * count_1) + (game2.price * count_2);
    printf("매출 = %d\n", Sales);
    printf("플레이 횟수: \n");
    printf("\t 게입1(브루마블) %d회,", game1.play);
    for (int i = 0; i < 4; i++) {
        if (game1.player[i] == 0) {
            continue;
        } else {
            printf("손님#%d ", game1.player[i]);
        }
    }
    printf("\n");
    printf("\t 게입2(젠가) %d회,", game2.play);
    for (int i = 0; i < 4; i++) {
        if (game2.player[i] == 0) {
            continue;
        } else {
            printf("손님#%d", game2.player[i]);
        }
    }
}
