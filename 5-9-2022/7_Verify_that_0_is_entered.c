#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool exist_0 = false;
    int x;
    for (int i = 1; i <= 5; i++)
    {
        printf("정수>> ");
        scanf("%d", &x);
        if (x == 0)
        {
            exist_0 = true;
        }
    }
    if (exist_0)
    {
        printf("0이 입력되었음\n");
    }
    else
    {
        printf("0이 입력되지 않았음\n");
    }
    return 0;
}
//  0이 한번도 없었으면 false(초깃값)
//  한번이라도 있었으면 true