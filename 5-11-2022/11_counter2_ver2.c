#include <stdio.h>

int main()
{

    int x;     // 입력 받을 변수
    int n_pos; // 양의 정수 카운터
    n_pos = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("정수>> ");
        scanf("%d", &x);

        if (x > 0)
        {
            n_pos++;
        }
    }
    printf("양의 정수: %d개\n", n_pos);
}