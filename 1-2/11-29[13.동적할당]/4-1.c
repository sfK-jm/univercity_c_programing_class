#include <stdio.h>
#define SIZE 100

int main() {
    char str[SIZE];
    printf("addr >> ");
    fgets(str, SIZE, stdin);
    // gets_s(str, SIZE);
    printf("%s\n", str);
}
