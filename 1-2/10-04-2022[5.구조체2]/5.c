#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;
typedef int int32;

int main(void) {
    int32 int_value = -30;
    uint positive_value = abs(int_value);

    printf("정수 = %d\n", int_value);
    printf("절대갑 = %u\n", positive_value);
    return 0;
}