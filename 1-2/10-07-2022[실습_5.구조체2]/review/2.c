// 앞의 예제에서 struct profile에 이름 멤버(char name[50]을 추가하고)
// 키보드로 입력 받고, 출력
#include <stdio.h>
#include <string.h>

struct profile {
    char name[50];
    int age;
    double height;
};

struct student {
    int id;
    char grade;
    struct profile pf;
};

int main() {
    struct student stu = {0, 12334, 'A', {23, 187.5}};
    printf("이름 = ");
    scanf("%s", stu.name);
    // stu.id = 12345;
    // stu.grade = 'A';
    // stu.pf.age = 23;
    // stu.pf.height = 187.5;

    printf("학번 : %d\n", stu.id);
    printf("학점 : %c\n", stu.grade);
    printf("나이 : %d\n", stu.pf.age);
    printf("키   : %.2f\n", stu.pf.height);
}