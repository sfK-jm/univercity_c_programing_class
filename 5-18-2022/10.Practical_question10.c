// 실습문제 10 주사위 2

#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = i; j <= 6; j++)
        {
            for (int k = j; k <= 6; k++)
            {
                if (i + j + k == n)
                {
                    cnt++;
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    printf("%d cases\n", cnt);
}
