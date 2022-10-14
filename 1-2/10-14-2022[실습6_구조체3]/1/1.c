#include <stdio.h>

typedef struct {
    int x, y;
    char color;
} POINT;

char to_char(int color) {
    switch (color) {
        case 0: {
            return 'R';
            break;
        }
        case 1: {
            return 'G';
            break;
        }
        case 2: {
            return 'B';
            break;
        }
        default: {
            break;
        }
    }
    return 'R';
}

int main(void) {
    POINT point_arr[100];
    int color_cnt[3] = {0};
    int size = 0;
    while (1) {
        int x, y, color;
        printf("x y color (R:0, G:1, B:2): ");
        scanf("%d%d%d", &x, &y, &color);
        if (x == 0 && y == 0) {
            break;
        }
        size++;
        point_arr[size - 1].x = x;
        point_arr[size - 1].y = y;
        point_arr[size - 1].color = to_char(color);
        color_cnt[color]++;
        printf("%d %d %c\n", point_arr[size - 1].x, point_arr[size - 1].y,
               point_arr[size - 1].color);
    }
    printf("R:%d G:%d B:%d\n", color_cnt[0], color_cnt[1], color_cnt[2]);
}
