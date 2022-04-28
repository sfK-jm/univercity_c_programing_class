/*
#include <stdio.h>

int main()
{
    int x;

    printf("나이를 입력하세요 : ");
    scanf("%d", &x);

    if (x >= 10 && x <= 19)
    {
        printf("이 사람은 10대입니다");
    }
    else
    {
        printf("이 사람은 10대가 아닙니다.");
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("%d", a);
    }
    else if (b>a)
    {
        printf("%d", b);
    }
    else
    {
        printf("몰?루");
    }

}
*/

/*
#include <stdio.h>

int main()
{
    int x,y;
    printf("정수 두개를 입력하세요 >> ");
    scanf("%d%d", &x, &y);

    printf("%d 더하기 %d은(는) %d 입니다.\n", x, y, x+y);
    printf("%d 빼기 %d은(는) %d 입니다.\n", x, y, x-y);
    printf("%d 곱하기 %d은(는) %d 입니다.\n", x, y, x*y);
    if (y != 0)
    {
        printf("%d을(를) %d로 나눈몫은 %d 입니다.\n", x, y, x/y );
        printf("%d을(를) %d로 나눈 나머지는 %d 입니다.\n", x, y, x%y );
    }
    else
    {
        printf("몰?루\n");
    }
}
*/
/*

#include <stdio.h>

int main()
{
    int k, y;

    scanf("%d%d", &k, &y);
    printf("%d\n", k);
    printf("%d\n", k * y);
    printf("%d\n", k * y * y);
    printf("%d\n", k * y * y * y);
    printf("%d\n", k * y * y * y * y);
}

*/

/*

 #include <stdio.h>

int main()
{
    int x,y,z;

    printf("정수를 입력하세요 >> ");
    scanf("%d", &x);
    printf("product = %d\n", x);

    printf("정수를 입력하세요 >> ");
    scanf("%d", &y);
    printf("product = %d\n", x *= y );

    printf("정수를 입력하세요 >> ");
    scanf("%d", &z);
    printf("product = %d\n", x *= z );
}

*/
/*

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("a b >>");
    scanf("%d%d", &a, &b);

    if(a<=b)
    {
        printf("a = %d, b = %d", a, b);
    }
    else
    {
                // 입력예시 25 15
        c = a; // c = 25
        a = b; // a = 15
        b = c; // b = 15

        printf("a = %d, b = %d", a, b );
    }


}
*/

/*
#include <stdio.h>

int main()
{
    int l1, l2, l3;

    printf("세변의 길이 >>");
    scanf("%d%d%d", &l1, &l2, &l3);
    if (l1 == l2 || l2 == l3 || l3 == l1)
    {
        printf("이등변 삼각형입니다\n");
    }
    else
    {
        printf("이등변 삼각형이 아닙니다.");
    }

}

*/

/*
#include <stdio.h>

int main()
{
    int score, absent;

    printf("시험 점수 결석일수 >> ");
    scanf("%d%d", &score, &absent);
    if ((score >= 80 || absent == 0) || (score >= 60 && absent <= 5))
    {
        printf("S\n");
    }
    else
    {
        printf("U\n");
    }
}
      */

/*
#include <stdio.h>

int main()
{
    int num, odd_cnt = 0;
            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("정수 입력>> ");
            scanf("%d", &num);
            odd_cnt += num % 2;

            printf("홀수는 %d개입니다.\n", odd_cnt);
}
 */
