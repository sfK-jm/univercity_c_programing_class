#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
} PERSON;

int main() {
    PERSON *p1 = (PERSON *)malloc(sizeof(PERSON));
    PERSON *p2 = (PERSON *)malloc(sizeof(PERSON));
    if (p1 == NULL) return 0;
    strcpy(p1->name, "Tom");
    // strncpy_s(p1->name, 100, "Tom", 4);
    strcpy(p2->name, "Gary");
    p1->age = 30;
    p2->age = 51;

    printf("%s %d\n", p1->name, p1->age);
    printf("%s %d\n", p2->name, p2->age);
    free(p1);
    free(p2);
}
