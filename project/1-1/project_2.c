/*


 1-1> 전역 변수 : 0
 1-2> randint() : 0
 1-3> 속도 수정: 0

 2-1> initialize(): 0
 2-2> print_status() : 0
 2-3> move(): 0
 2-4> count(): 0

 3-1> draw() (빈함수): 0
 3-2> main() 정리 : 0
 3-3> move() 수정 (토르) : 0
 3-4> draw() 작성 : 0

 4-1> 1초마다 반복 : 0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // srand(), rand() 함수 포함
#include <time.h>    // time() 함수 포함

int captain = 30;  // 캡틴 전역변수 설정
int ironman, thor, doctor, ironman_speed, doctor_speed,
    thor_dir;  // 기타 영웅들의 위치와 속도 전역변수 설정
int sec = 0;   // sec전역변수 설정

// 함수들 선언
int randint(int, int);
void initialize(void);
void print_status(int);
void move(void);
int count(void);
void draw(void);

// 랜덤 함수 정의
int randint(int min, int max)  // rand 함수
{
    return rand() % (max - min + 1) + min;  // min이상 max이하의 랜덤 함수 리턴
}

// 초기값 설정 함수 정의
void initialize() {
    // captain = 30 -> captain - 1 = 29
    // rand() % ( 29 - 1 + 1 ) + 1
    ironman = randint(1, captain - 1);  //  아이언맨 초기위치 1 ~ 29
    thor = randint(1, captain - 1);     //  토르 초기위치 1 ~ 29
    doctor = randint(1, captain - 1);   // 닥터 초기위치 1 ~ 29

    // (5 - 1 + 1) + 1
    ironman_speed = randint(1, 5);  //  아이언맨의 속도 1 ~ 5

    // (1 - 0 + 1) + 0
    thor_dir = randint(0, 1);  // 토르의 방향 0 or 1
    if (thor_dir == 0) {
        thor_dir = -3;
    } else {
        thor_dir = 3;
    }

    doctor_speed = 5;
}

void print_status(int sec)  // 출력 함수 정의
{
    printf("\n========[%d초]========\n", sec);
    printf("캡틴: <%d>\n", captain);
    printf("아이언맨: <%d> (%d)\n", ironman, ironman_speed);
    printf("토르: <%d> (%d)\n", thor, thor_dir);
    printf("닥터 스트레인지: <%d> (%d)\n", doctor, doctor_speed);
    printf("소집 완료: %d명\n", count());
}

void move(void)  // 영웅들의 이동함수
{
    ironman += ironman_speed;
    if (ironman > captain) {
        ironman = captain;
    }

    thor += thor_dir;
    if (thor > captain) {
        thor = captain;
    }

    if (thor <= 1) {
        thor = 1;
        thor_dir = 3;
    }

    doctor += doctor_speed;
    if (doctor > captain) {
        doctor = captain;
    }
}

int count(void)  // 소집 인원수 세기 함수 정의
{
    int assemble_cnt = 0;

    if (ironman == captain) assemble_cnt++;

    if (thor == captain) assemble_cnt++;

    if (doctor == captain) assemble_cnt++;

    return assemble_cnt;
}

void draw(void)  // 영웅들 위치를 표현하는 함수 정의
{
    for (int i = 1; i <= 29; i++) {
        if (i == ironman) {
            printf("I");
        } else if (i == thor) {
            printf("T");
        } else if (i == doctor) {
            printf("D");
        } else if (i == ironman && i == thor) {
            printf("I");
        } else if (i == thor && i == doctor) {
            printf("T");
        } else if (i == doctor && i == ironman) {
            printf("I");
        } else {
            printf("_");
        }
    }
    printf("C\n");
}

int main(void) {
    srand((unsigned int)time(NULL));

    initialize();  // 변수 초기 설정

    while (count() != 3)  // 영웅들의 모든 위치가 모두 30일때까지 반복
    {
        print_status(sec);
        draw();
        move();
        printf("계속 하실려면 엔터 키를 누르세요...");
        getchar();
        sec++;
    }
    // 영웅들의 모든 위치가 30일때 출력

    print_status(sec);  // 모든 영웅들의 위치가 30일때 상태 출력
    draw();  // 모든 영웅들의 위치가 30 일때 그림함수출력

    printf("어벤져스 소집 완료! 소요시간: %d초",
           sec);  // 영웅들이 모일때까지의 시간 출력

    return 0;
}