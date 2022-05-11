#include <stdio.h>

int main()
{
    int n, m, k;
    printf("n m k>> ");
    scanf("%d%d%d", &n, &m, &k);

    int cnt = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % k == 0)
            cnt++;
    }
    printf("[%d, %d]에서 %d의 배수는 %d개\n", n, m, k, cnt);
}