#include <stdio.h>

int main()
{

    // int x = 0, x_old;

    // for (int i = 1; i <= 10; i++) {
    //	x_old = x;
    //	x++;
    //	printf("x: %d --> %d\n", x_old, x);
    // }

    int x = 0, x_new;

    for (int i = 1; i <= 10; i++)
    {
        x_new = x + 1;
        printf("x: %d --> %d\n", x, x_new);
        x = x_new;
    }
}