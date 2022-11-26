#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    char category[100];
    int damage;
    int range;
    int ammo;
    int speed;
} FIREARM;

void print_firearm(FIREARM *f) {
    printf("name: %s\n", f->name);
    printf("category: %s\n", f->category);
    printf("damage: %d\n", f->damage);
    printf("range: %d\n", f->range);
    printf("ammo: %d\n", f->ammo);
    printf("speed: %d/min\n", f->speed);
}

FIREARM *select_firearm(FIREARM firearms[], int n, char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(target, firearms[i].name) == 0) {
            return &firearms[i];
        }
    }
    return &firearms[0];  // 못찾으면 첫 번째 구조체 선택
}

int main() {
    FIREARM ak47 = {"AK47", "rifle", 35, 500, 30, 800};
    FIREARM m4a1 = {"M4A1", "rifle", 30, 600, 35, 1000};
    FIREARM de = {"DE", "gun", 70, 20, 5, 20};

    char name[100] = {0};
    printf(">>> ");
    scanf("%s", name);

    FIREARM *selected = NULL;
    if (strcmp(name, ak47.name) == 0) {
        selected = &ak47;
    } else if (strcmp(name, m4a1.name) == 0) {
        selected = &m4a1;
    } else {
        selected = &de;
    }
    print_firearm(selected);
    printf("\n");

    // 구조체 배열 사용
    /*
    FIREARM firearms[3] = {{"AK47", "rifle", 35, 500, 30, 800},
                           {"M4A1", "rifle", 30, 600, 35, 1000},
                           {"DE", "gun", 70, 20, 5, 20}};
    char name[100] = {0};
    printf(">>> ");
    scanf("%s", name);
    FIREARM *selected = select_firearm(firearms, 3, name);
    print_firearm(selected);
    printf("\n");
    */
}