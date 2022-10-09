#include <stdio.h>

typedef struct {
    int age;
    char introduce[100];
    char dream[100];
} Profile;

typedef struct {
    int score[5];
    int total_score;
    float average;
} Grade;

typedef struct {
    int number;
    char name[50];
    Profile pf;
    Grade gd;
} Student;

Student setting_student(void) {
    Student student1 = {11115,  "홍길동", 18, "아비를 아비라 부르지 못하고",
                        "의적", 0,        0,  0};

    printf("5과목의 점수>> ");
    for (int i = 0; i < sizeof(student1.gd.score) / sizeof(int); i++) {
        scanf("%d", &student1.gd.score[i]);
        student1.gd.total_score += student1.gd.score[i];
    }
    student1.gd.average = (float)student1.gd.total_score / 5;
    return student1;
}

void print_score(Student struction) {
    printf("\n");
    printf("ID: %d\n", struction.number);
    printf("이름: %s\n", struction.name);
    printf("나이: %d세\n", struction.pf.age);
    printf("소개: %s\n", struction.pf.introduce);
    printf("장래희망: %s\n", struction.pf.dream);
    printf("5과목의 점수: ");
    for (int i = 0; i < sizeof(struction.gd.score) / sizeof(int); i++) {
        printf("%d ", struction.gd.score[i]);
    }

    printf("\n총점 %d, 평균: %.2f\n", struction.gd.total_score,
           struction.gd.average);
}

int main() {
    Student student1 = setting_student();
    print_score(student1);
}
