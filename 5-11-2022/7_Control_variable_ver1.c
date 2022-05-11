#include <stdio.h>
#include <stdbool.h>

void repeat_inc(int start, int stop, int step);
void repeat_dec(int start, int stop, int step);

void repeat_inc(int start, int stop, int step)
{
    for (int i = start; i <= stop; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void repeat_dec(int start, int stop, int step)
{
    for (int i = start; i >= stop; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    repeat_inc(1, 15, 2);
    repeat_dec(10, 1, -1);
    repeat_inc(4, 32, 4);
    repeat_dec(18, 0, -3);
    repeat_dec(80, -100, -30);

    for (int i = 3; i <= 729; i *= 3)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 256; i >= 1; i /= 2)
    {
        printf("%d ", i);
    }
    printf("\n");
}