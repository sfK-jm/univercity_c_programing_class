#include <stdio.h>
#include <string.h>

void print_heroes(const char* title, char* heroes[], int size) {
    printf("%s: ", title);
    for (int i = 0; i < size; i++) {
        printf("%s ", heroes[i]);
    }
    printf("\n");
}

int main() {
    char winston[] = "원숭이";
    char zenyata[] = "빡빡이";
    char reinhart[] = "라붕이";
    char doomfist[] = "둠발롬";
    char ramattra[] = "라마트라";
    char wreckingball[] = "햄찌";
    char moira[] = "모기";
    char dva[] = "깡통";
    // char overwatch[3][100] = {"원숭이", "라붕이", "깡통"};  // <- 참고 char*
    char* overwatch[10] = {winston, reinhart, dva};
    char* talon[10] = {doomfist, moira};
    char* omnic[10] = {zenyata, ramattra};
    int ow_cnt = 3, talon_cnt = 2, omnic_cnt = 2;
    print_heroes("overwatch", overwatch, ow_cnt);
    print_heroes("talon", talon, talon_cnt);
    print_heroes("omnic", omnic, omnic_cnt);
    printf("\n");
}