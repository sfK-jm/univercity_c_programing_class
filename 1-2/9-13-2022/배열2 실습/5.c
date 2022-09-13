#include <stdio.h>

int main(void)
{
    char pet_arr[3][5] = 
    {
        {'d', 'u', 'c', 'c', 'k'},
        {'c', 'a', 't'},
        {'d', 'o', 'g'}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", pet_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}