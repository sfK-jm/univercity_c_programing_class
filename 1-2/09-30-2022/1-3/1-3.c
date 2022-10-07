#include <stdio.h>

struct user {
    char name[20];
    int id;
    int password;
    char last_login[20];
    int last_login_month[20];
};

int main() {
    int day;
    struct user user1 = {"사용자1", 11115, 1234, "2021-05-07 ", 0};
    printf("사용자 1이 이번 달 방문한 횟수>> ");
    scanf("%d", &day);
    printf("사용자1이 이번 달 방문한 날짜(%d일)>> ", day);
    for (int i = 0; i < day; i++) {
        scanf("%d", &user1.last_login_month[i]);
    }

    printf("이름: %s\n", user1.name);
    printf("id: %d\n", user1.id);
    printf("비밀번호: %d\n", user1.password);
    printf("최근 접속일: %s\n", user1.last_login);
    printf("이번 달 방문한 날짜: ");
    for (int i = 0; i < day; i++) {
        printf("%d ", user1.last_login_month[i]);
    }
}