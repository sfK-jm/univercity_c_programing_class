#include <stdio.h>

int main() {
    int x = 1, cnt = 0;
    while (x != 0) {
        printf("x = ");
        scanf("%d", &x);
        cnt++;
    }
    printf("cnt = %d\n", cnt);
    return 0;
}