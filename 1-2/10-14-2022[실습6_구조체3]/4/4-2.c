#include <stdio.h>

typedef struct {
    char name[50];        // 과목이름
    int num;              // 학수번호
    int professor;        // 담당교수
    char introduce[100];  // 강좌 소개
    int school_year;      // 수강 학년
} LECTURE;

typedef struct {
    char name[50];       //이름
    int professor_num;   // 교직원 번호
    int room_num;        // 연구실
    int lecture_num[5];  // 강의과목(번호)
    LECTURE lecture[3];
} PROFESSOR;

void print_professor(PROFESSOR p1, LECTURE lecture) {
    for (int i = 0; i < 2; i++) {
        if (p1.lecture_num[i] == lecture.num) {
            printf("\t%s\n", lecture.name);
        }
    }
}

int main() {
    PROFESSOR P1 = {
        "나교수",
        45678,
        710,
        {11111, 33333},
    };
    LECTURE L[3] = {
        {"프로그래밍실습", 11111, 45678,
         "C언어를 사용해서 프로그래밍 기초 실습", 0},
        {"고급프로그래밍실습", 22222, 45678, "C언어 배열, 구조체, 포인터 실습",
         1},
        {"알고리즘", 33333, 45678, "재귀, 정렬, 탐색 등의 알고리즘", 2}};

    printf("이름: %s\n", P1.name);
    printf("교직원 번호: %d\n", P1.professor_num);
    printf("연구실: %d\n", P1.room_num);
    printf("강의 과목:\n");
    for (int i = 0; i < 3; i++) {
        print_professor(P1, L[i]);
    }
}
