// 실습문제 8 순열

#include <stdio.h>

int main()
{
    for (char first = 'a'; first <= 'z'; first++)
    {
        for (char second = 'a'; second <= 'z'; second++)
        {
            for (char third = 'a'; third <= 'z'; third++)
            {
                printf("%c%c%c\n", first, second, third);
            }
        }
    }
}
