

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));
    
    int iron ,captain, thor, doctor, ironspeed, thordirection;
    captain = 30;   // captain = 30
    iron = rand() % 29 + 1; // iron 1 ~ 29
    thor = rand() % 29 + 1; // thor 1~29
    doctor = rand() % 29 + 1;   // doctor 1~29
    thordirection = rand() % 2; //토르 방향 0 or 1
    
    printf("[초기상태]\n");
    printf("캡틴: <%d>\n", captain);
    printf("아이언맨: <%d>\n", iron);
    printf("토르: <%d>\n", thor);
    printf("닥터 스트레인지<%d>\n", doctor);
    printf("\n");
    printf("아이언맨의 속도>> ");
    scanf("%d", &ironspeed); // 아이언맨 속도 입력
    if (ironspeed >= 1 && ironspeed <= 10 )
    {
        printf("아이언맨의 속도 = %d\n", ironspeed); // 아이언맨 속도 출력
    }
    
    
    iron = iron + ironspeed; // 아이언맨 위치 = 아이언맨 원래 위치 + 입력 받은 속도
    
    if(iron >= 30) //아이언맨 위치가 30보다 크거나 같을경우
    {
        iron = 30; //아이언맨 위치 = 30
    }
  
    if( thordirection == 0) // 토르방향이 0일경우
    {
      printf("토르의 이동방향: 왼쪽(-1)\n");
        thor = thor -1;     //토르의 위치가 -1이 된다
    }
    
    if( thordirection == 1) // 토르방향이 1일 경우
    {
        printf("토르의 이동방향: 오른쪽(+1)\n");
        thor = thor + 1; // 토르의 위치가 +1이 된다
    }
    
    doctor = doctor + 10; // 닥터위치 + 10
    if (doctor >= captain)  // 닥터의 위치가 캡틴보다 크거나 같으면
    {
        doctor = 30;    // 닥터의 위차는 30이 된다
    }
    
    
  
    printf("\n");
    printf("[1초후]\n");
    printf("캡틴: <%d>\n", captain);
    printf("아이언맨: <%d>\n", iron);
    printf("토르: <%d>\n", thor);
    printf("닥터 스트레인지<%d>\n", doctor);
  
    
    if(iron == captain && thor == captain && doctor == captain)
    {
        printf("====3명소집 완료====\n");
    }
    
    else if(iron == captain && thor == captain)
    {
        printf("====2명소집 완료====\n");
    }
    
    else if(thor == captain && doctor == captain)
    {
        printf("====2명소집 완료====\n");
    }
    
    else if(doctor == captain && iron == captain)
    {
        printf("====2명소집 완료====\n");
    }
    
    else if(iron == captain || thor == captain || doctor == captain)
    {
        printf("====1명소집 완료====\n");
    }
    else
    {
        printf("====아무도 안왔음====\n");
    }
    return 0;
}

 


