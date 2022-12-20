#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
} PERSON;

PERSON *set_person(char *name, int age) {
    PERSON *p1 = (PERSON *)malloc(sizeof(PERSON));
    strcpy(p1->name, "Tom");
    p1->age = 30;
    return p1;
}

int main() {
    PERSON *p1 = set_person("Tom", 30);
    if (p1 == NULL) return 0;

    printf("%s %d\n", p1->name, p1->age);
}
