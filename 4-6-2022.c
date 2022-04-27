/*
#include <stdio.h>

int main()
{
   for (int i = 1; i <= 10; i++)
 {
     printf("컴퓨터공학도와 C언어는 애증의 관계이다.\n");
 }
}
*/

/*
#include <stdio.h>

int main()
{
    int x, y;
    x = 1;
   
    for (int i = 1; i <= 5; i++)
    {
        printf("곱 = %d\n", x);
        printf("정수를 입력하세요 >> ");
        scanf("%d", &y);
        x = x * y;
    }
    printf("곱 = %d\n", x);
}
*/

/*
#include <stdio.h>

int main()
{
    int x, y;
    printf("k>> ");
    scanf("%d", &x);
    printf("\n");
    
    for (int i = 1; i <= 5; i++)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &y);
        if(y%x == 0)
        {
            printf("%d은(는) %d의 배수입니다.\n", y,x);
        }
        else
        {
            printf("%d은(는) %d의 배수가 아닙니다\n", y,x);
        }
        printf("\n");
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int k, n, x;
    printf("k n >> ");
    scanf("%d%d", &k, &n);
    printf("\n");
    
    for(int i = 1; i <= n; i++)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &x);
       
        if(k%x == 0)
        {
            printf("%d은(는) %d의 배수입니다.\n", x,k);
        }
        else
        {
            printf("%d은(는) %d의 배수가 아닙니다\n", x,k);
        }
        printf("\n");
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int a;
    while(1)
    {
        printf("ID>> ");
        scanf("%d", &a);
        
        if ( a >= 10000 && a <= 19999)
        {
            printf("학생\n");
        }
        else if ( a >= 20000 && a <= 29999)
        {
            printf("교수\n");
        }
        else if ( a >= 30000 && a <= 39999)
        {
            printf("직원\n");
        }
        else
        {
            printf("강사\n");
        }
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int x= 2;
    for(int i = 1; i <=10; i++)
    {
        
        printf("%d ",x);
        x *= 2;
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int r, k, x, i ;
    printf("r k>> ");
    scanf("%d%d", &r, &k);
    x = r;
    
    for ( i = 1; i <= k; i++)
    {
        printf("%d ", r);
        r = r * x ;
    }
}
*/

/*
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    bool is_leaf;
        printf("year = ");
        scanf("%d", &year);

        if (year % 400 == 0) {
            is_leaf = true;
        }
        else if (year % 100 == 0) {
            is_leaf = false;
        }
        else if (year % 4 == 0) {
            is_leaf = true;
        }
        else {
            is_leaf = false;
        }

        if (is_leaf) {
            printf("%d is a leaf year\n", year);
        }
        else {
            printf("%d is NOT a leaf year\n", year);
        }
    }
*/

/*
#include <stdio.h>

int main()
{
    int  a, b, c, small;
    printf("input 3 integers>> ");
    scanf("%d%d%d", &a, &b, &c);
    if ( a < b && a < c)
    {
        small = a;
    }
    else if (b < a && b <c)
    {
        small = b;
    }
    else
    {
        small = c;
    }
    printf("%d\n", small);
}
*/

/*
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("input 3 integers>> ");
    scanf("%d%d%d", &x, &y, &z);
    
    if (x < y && x < z) // x가 제일 작을 경우
    {
        if (y < z) // 순서가 x < y < z 일경우
        {
            printf("%d %d %d\n", x, y, z);
        }
        else // 순서가 x < z < y 일 경우
        {
            printf("%d %d %d\n", x, z, y);
        }
    }
    else if (y < x && y < z) // y가 제일 작을 경우
    {
        if (x < z) // 순서가 y < x < z읽 경우
        {
            printf("%d %d %d\n", y, x, z);
        }
        else // 순서가 y < z < x 일 경우
        {
            printf("%d %d %d\n", y, z, x);
        }
    }
    else // z가 제일 작을 경우
    {
        if (x < y) // 순서가 z < x < y 일경우
        {
            printf("%d %d %d", z, x, y);
        }
        else // 순서가 z < y < x 일경우
        {
            printf("%d %d %d", z, y, x);
        }
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int x, y, z; // 길이가 작은 순서대로 입력된다고 가정했을때
    printf("세 변의 길이>> ");
    scanf("%d%d%d", &x, &y, &z);
    
    if  (x + y <= z)
    {
        printf("삼각형이 아님\n");
    }
    
    else if ( x == y && y == z)
    {
        printf("정삼각형\n");
    }
    
    else if ( x == y || y == z || z == x)
    {
        printf("이등변삼각형\n");
    }
    else
    {
        printf("삼각형\n");
    }
}
*/

/*
#include <stdio.h>

int main()
{
    int x, y, z, etc ;
    printf("세 변의 길이 >> ");
    scanf("%d%d%d", &x, &y, &z);
    
    if (x >= y && x >= z)
    {
        etc = x;
        x = z;
        z = etc;
    }
    else if ( y >= x && y >= z )
    {
        etc = y;
        y = z;
        z = etc;
    }
    
    if (x + y <= z) {
        printf("삼각형이 아님\n");
    }
    else if (x == y && y == z) {
        printf("정삼각형\n");
    }
    else if (x == y || y == z || z == x) {
        printf("이등변삼각형\n");
    }
    else {
        printf("삼각형\n");
    }
}
*/
