#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main() {
    int size;
    printf("size>> ");
    scanf("%d", &size);
    getchar();
    char* str = (char*)malloc(size);
    if (str == NULL) {
        printf("str = null");
        return 0;
    }
    printf("addr>> ");
    fgets(str, size, stdin);
    // gets_s(str, size);
    printf("%s\n", str);
    free(str);
}
