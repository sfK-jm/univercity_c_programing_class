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