#include <stdio.h>

struct user {
    char name[20];
    int id;
    int password;
    char day[20];
};

int main() {
    struct user user1 = {"사용자1", 11115, 1234, "2021-05-07"};
    struct user user2 = {"사용자2", 12226, 5678, "2021-08-07"};
    struct user user3 = {0};

    printf("이름>> ");
    scanf("%s", user3.name);
    printf("id>> ");
    scanf("%d", &user3.id);
    printf("password>> ");
    scanf("%d", &user3.password);
    printf("최근 접속일>> ");
    scanf("%s", user3.day);

    printf("\n");
    printf("\n");

    printf("이름: %s\n", user3.name);
    printf("id: %d\n", user3.id);
    printf("비밀번호: %d\n", user3.password);
    printf("최근 접속일: %s\n", user3.day);
}