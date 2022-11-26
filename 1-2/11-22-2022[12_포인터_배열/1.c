#include <stdio.h>

int x = 10, y = 20, z = 30;
int *parr[3] = {&x, &y, &z};
void print();

void print() {
    printf("%d %d %d\n", x, y, z);
    for (int i = 0; i < 3; i++) {
        printf("%d ", *parr[i]);
    }
    printf("\n\n");
}

int main() {
    print();
    x++;
    print();
    (*parr[1])++;
    print();
    return 0;
}