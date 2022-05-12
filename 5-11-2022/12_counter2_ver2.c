#include <stdio.h>

int main()
{
    int n; // 입력 받을 정수의 개수
    printf("n>> ");
    scanf("%d", &n);
    int x;
    int n_pos = 0, n_zero = 0, n_neg = 0;

    for (int i = 0; i < n; i++)
    {
        printf("정수>> ");
        scanf("%d", &x);

        if (x > 0)
            n_pos++;
        else if (x == 0)
            n_zero++;
        else
            n_neg++;
    }
    printf("양의 정수: %d개\n", n_pos);
    printf("0        : %d개\n", n_zero);
    printf("음의 정수: %d개\n", n_neg);
}