#include <stdio.h>

struct game {
    int num;
    char name[20];
    int price;
    int play;
};

int main(void) {
    struct game game1 = {1, "브루마블", 1000, 0};
    struct game game2 = {1, "젠가", 800, 0};

    int count_1 = 0;
    int count_2 = 0;

    printf("게임 번호(4개)>> ");
    for (int i = 0; i < 4; i++) {
        int num;
        scanf("%d", &num);
        if (num == 1) {
            count_1++;
            game1.play++;
        } else if (num == 2) {
            count_2++;
            game2.play++;
        }
    }
    int Sales = (game1.price * count_1) + (game2.price * count_2);
    printf("매출 = %d\n", Sales);
    printf("플레이 횟수: \n");
    printf("\t 게입1(브루마블) %d회\n", game1.play);
    printf("\t 게입2(젠가) %d회\n", game2.play);
}
