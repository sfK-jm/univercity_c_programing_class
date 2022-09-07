#include <stdio.h>

int main()
{
    int n, m, gcd, lcm;
    printf("n m>> ");
    scanf("%d%d", &n, &m);

    // 입력 받은 n, m은 그대로 남겨둠
    //  a, b는 계산할 때 사용할 변수
    int a = n, b = m;

    // gcd(a, b) = gcd(b, a % b)를 반복
    // b가 0이 되었을 때 a가 최대공약수
    printf("gcd(%d, %d)\n", a, b);
    while (b > 0)
    {
        int a_old = a;
        a = b;
        b = a_old % b;
        printf("  = gcd(%d, %d)\n", a, b);
    }

    gcd = a;
    lcm = n * m / gcd;

    printf("  = %d\n", gcd);
    printf("\nlcm(%d, %d) = %d\n", n, m, lcm);

    // 유클리드 호제법
    // gcd(a,b) = gcd(b, a%b)
    // gcd(a,0) = a
    // lcm(a,b) = a*b / gcd(a,b)
}