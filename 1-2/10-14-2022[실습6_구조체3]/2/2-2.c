#include <stdio.h>

typedef struct {
    char name[100];
    int age;
    char tel[100];
    char resident[100];
} ADDRESS;

int main(void) {
    ADDRESS addr[4] = {{"홍길동", 23, "012-345-6789", "울릉도"},
                       {"이순신", 35, "111-222-3333", "서울 건천동"},
                       {"장보고", 19, "222-333-4444", "청해진"},
                       {"유관순", 15, "333-444,5555", "충남 천안"}};
    for (int i = 0; i < 4; i++) {
        printf("%s(%d), %s, %s\n", addr[i].name, addr[i].age, addr[i].tel,
               addr[i].resident);
    }
    printf("주소록의 모든 거주지: ");
    for (int i = 0; i < 4; i++) {
        printf("%s ", addr[i].resident);
    }
    int idx = 0;
    for (int i = 1; i < 4; i++) {
        if (addr[i].age > addr[idx].age) {
            idx = i;
        }
    }
    printf("\n가장 나이가 많은 사람: %s(%d)\n", addr[idx].name, addr[idx].age);
}