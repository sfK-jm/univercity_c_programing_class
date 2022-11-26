#include <stdio.h>

int f(int x) { return ++x; }

int main() {
    int x = 10;
    int result = f(x);
    printf("result = %d\n", result);
}