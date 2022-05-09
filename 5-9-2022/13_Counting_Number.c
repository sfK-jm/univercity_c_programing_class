#include <stdio.h>

int main()
{
    for (int i = -20; i <= 20; i++)
    {

        if (i > 0)
        {
            printf("+%2d\n", i);
        }
        else
        {
            printf("%3d\n", i);
        }
    }
    return 0;
}