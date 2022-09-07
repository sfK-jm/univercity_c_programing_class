#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool flag_exit = false;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
            if (i == 1 && j == 2)
            {
                flag_exit = true;
                {
                    break;
                }
            }
        }
        printf("\n");
        if (flag_exit)
            break;
    }
    printf("종료합니다.\n");
}