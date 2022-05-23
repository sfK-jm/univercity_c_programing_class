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