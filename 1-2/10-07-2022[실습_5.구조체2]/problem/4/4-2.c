#include <stdio.h>

typedef struct {
    char name[50];
    int professor_num;
    int room_num;
    int lecture_num;
} Professor_data;

typedef struct {
    char lecture_name[50];
    int lecture_num;
    int lecture_professor_num;
    char lecture_introduce[100];
} Lecture_data;

Professor_data setting_professor_data(void) {
    Professor_data professor = {"나교수", 45678, 710, 11111};
    return professor;
}

Lecture_data setting_lecture_data(void) {
    Lecture_data lecture = {"프로그래밍실습", 11111, 45678,
                            "C언어를 사용해서 프로그래밍 기초 실습"};
    return lecture;
}

void print_professor_info(Professor_data professor, Lecture_data lecture) {
    printf("[교수정보]\n");
    printf("이름: %s\n", professor.name);
    printf("교직원번호 %d\n", professor.professor_num);
    printf("연구실: %d\n", professor.room_num);
    printf("강의이름: %s\n", lecture.lecture_name);
}

void print_lecture_info(Professor_data professor, Lecture_data lecture) {
    printf("[교과목 정보]\n");
    printf("이름: %s\n", lecture.lecture_name);
    printf("학수번호: %d\n", lecture.lecture_num);
    printf("담당교수: %s\n", professor.name);
    printf("강좌 소개: %s\n", lecture.lecture_introduce);
}
int main() {
    // 구조체 설정
    Professor_data professor_info = setting_professor_data();
    Lecture_data lecture_info = setting_lecture_data();
    // 교수 정보 출력
    print_professor_info(professor_info, lecture_info);
    printf("\n");
    print_lecture_info(professor_info, lecture_info);
}