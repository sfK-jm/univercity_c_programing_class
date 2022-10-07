#include <stdio.h>

struct game {
    int num;
    char name[20];
    int price;
};

int main(void) {
    struct game game1 = {1, "브루마블", 1000};
    struct game game2 = {1, "젠가", 800};

    int count_1 = 0;
    int count_2 = 0;

    printf("게임 번호(4개)>> ");
    for (int i = 0; i < 4; i++) {
        int num;
        scanf("%d", &num);
        if (num == 1) {
            count_1++;
        } else if (num == 2) {
            count_2++;
        }
    }
    int Sales = (game1.price * count_1) + (game2.price * count_2);
    printf("매출 = %d", Sales);
}
