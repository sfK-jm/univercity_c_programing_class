#include <stdio.h>

typedef struct {
    char name[50];      //이름
    int professor_num;  // 교직원 번호
    int room_num;       // 연구실
    int lecture_num;    // 강의과목(번호)
} PROFESSOR;

typedef struct {
    char name[50];        // 과목이름
    int num;              // 학수번호
    int professor;        // 담당교수
    char introduce[100];  // 강좌 소개
    int school_year;      // 수강 학년
} LECTURE;

void print_professor_info(PROFESSOR, LECTURE);
void print_lecture_info(PROFESSOR, LECTURE);

int main() {
    PROFESSOR P1 = {"나교수", 45678, 710, 11111};
    LECTURE L1 = {"프로그래밍실습", 11111, 45678,
                  "C언어를 사용해서 프로그래밍 기초 실습", 0};
    LECTURE L2 = {"고급프로그래밍실습", 22222, 45678,
                  "C언어 배열, 구조체, 포인터 실습", 1};

    print_professor_info(P1, L2);
    print_lecture_info(P1, L2);
}

void print_professor_info(PROFESSOR professor, LECTURE lecture) {
    printf("[교수 정보]\n");
    printf("이름: %s\n", professor.name);
    printf("교직원번호: %d\n", professor.professor_num);
    printf("연구실: %d\n", professor.room_num);
    printf("강의 과목: %s\n", lecture.name);
    printf("\n");
}
void print_lecture_info(PROFESSOR professor, LECTURE lecture) {
    printf("[교과목 정보]\n");
    printf("과목이름: %s\n", lecture.name);
    printf("학수번호: %d\n", lecture.num);
    printf("담당교수: %s\n", professor.name);
    printf("학년: %d\n", lecture.school_year);
    printf("강좌 소개: %s\n", lecture.introduce);
    printf("\n");
}