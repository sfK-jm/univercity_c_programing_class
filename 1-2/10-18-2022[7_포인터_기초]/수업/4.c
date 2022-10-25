#include <stdio.h>

int main(void) {
    int a = 5;
    int *ap = &a;

    typedef unsigned int uint;

    printf("a의 값                 : %d\n", a);
    printf("ap를 참조한 값         : %d\n", *ap);

    printf("a의 포인터             : %u\n", (uint)&a);
    printf("ap에 저장된 값(주소)   : %u\n", (uint)ap);

    printf("a의 포인터             : 0x%X\n", (uint)&a);
    printf("ap에 저장된 값(주소)   : 0x%X\n", (uint)ap);
}
