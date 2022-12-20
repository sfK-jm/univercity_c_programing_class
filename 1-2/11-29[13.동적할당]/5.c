#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
} PERSON;

int main() {
    PERSON *p1 = (PERSON *)malloc(sizeof(PERSON));
    if (p1 == NULL) return 0;
    strcpy(p1->name, "Tom");
    // strncpy_s(p1->name, 100, "Tom", 4);
    p1->age = 30;
    printf("%s %d\n", p1->name, p1->age);
    free(p1);
}
