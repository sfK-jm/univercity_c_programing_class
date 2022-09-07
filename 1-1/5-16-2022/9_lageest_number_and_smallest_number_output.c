// 양의 정수 5개를 입력 받아 그 중 가장 큰 값과 가장 작은 값 출력
#include<stdio.h>

int main()
{
    int num, high_num, low_num;
    high_num = 0;
    low_num = 9999;
    for (int i= 1; i <= 5; i++)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &num );
        if (num > high_num)
            high_num = num; 
        
        if (num < low_num)
            low_num = num;
    }

    printf("가장 큰 수 = %d\n", high_num);
    printf("가장 작은 수 = %d\n", low_num);
}