
#include <stdio.h>

int f(int);

int golbal_var = 0; //젼역변수

int f(int a)
{
    int b = 10;
    golbal_var++;
    printf("%d\n", golbal_var);
}

int main(void)
{
    int x = 10;
    golbal_var = 10;
    printf("%d\n", golbal_var);
    f(5);
    return 0;
}