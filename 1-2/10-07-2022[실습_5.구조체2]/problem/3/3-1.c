#include <stdio.h>

typedef struct {
    int age;
    char introduce[100];
    char dream[100];
} Profile;

typedef struct {
    int number;
    char name[50];
    Profile pf;
} Student;

int main() {
    Student student1 = {11115, "홍길동", 18, "아비를 아비라 부르지 못하고",
                        "의적"};

    printf("ID: %d\n", student1.number);
    printf("이름: %s\n", student1.name);
    printf("나이: %d세\n", student1.pf.age);
    printf("소개: %s\n", student1.pf.introduce);
    printf("장래희망: %s\n", student1.pf.dream);
}
