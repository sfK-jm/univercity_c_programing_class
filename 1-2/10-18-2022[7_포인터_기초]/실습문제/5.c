#include <stdio.h>

int main(void) {
    int num1 = 5, num2;
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    (*p2) = (*p1) * 2;
    printf("num1 = %d, num2 = %d\n", num1, num2);
}