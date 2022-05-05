#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));

    int iron, captain, thor, doctor, ironspeed, thorspeed, doctorspeed;
    int time = 0; //시간 변수 입력
    captain = 30;             // captain = 30
    iron = rand() % 29 + 1;   // iron 1 ~ 29
    thor = rand() % 29 + 1;   // thor 1~29
    doctor = rand() % 29 + 1; // doctor 1~29

    ironspeed = rand() % 5 + 1; //아이언맨 속도 1 ~ 5
    thorspeed = rand() % 2;     //토르 방향 0 or 1
    doctorspeed = 5;            //닥터속도 = 5


    //printf("토르 속도<%d>\n", thorspeed);
    //printf("아이언맨 속도<%d>\n", ironspeed);
   
    
    if (thorspeed == 0)
    {
        thorspeed = -3;
    }

    else
    {
        thorspeed = 3;
    }

    while (thor < 30 || iron < 30 || doctor <30 )
    {
    
    printf("[%d초]\n", time);
    printf("캡틴: <%d>\n", captain);
    printf("아이언맨: <%d> (%d)\n", iron,ironspeed);
    printf("토르: <%d> (%d)\n", thor,thorspeed);
    printf("닥터 스트레인지:<%d> (%d)\n", doctor,doctorspeed);

    iron += ironspeed;
    thor += thorspeed;
    doctor += doctorspeed;
    
    if (iron >= 30)
    {
        iron = 30; 
    }
    
    if (thor >= 30)
    {
        thor = 30;
    }

    if (doctor >= 30)
    {
        doctor = 30;
    }

    printf("계속 하실려면 엔터 키를 누르세요...");
    getchar();

    time++;
    
    }
    
    printf("어벤져스 집합 소요시간 %d초", time-1);

    return 0;
}
