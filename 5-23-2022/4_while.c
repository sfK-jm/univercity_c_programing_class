#include <stdio.h>

int main()
{
    int num, min_num;
    min_num = 999;
    while (num != 0)
    {
        printf("x = ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;;
        }
        else if (num < min_num)
        {
            min_num = num;
        }
    }
    printf("min = %d",min_num);
}