#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ip = (int *)malloc(sizeof(int));
    if (ip == NULL) return 0;
    *ip = 10;
    printf("%d\n", *ip);
    free(ip);
}