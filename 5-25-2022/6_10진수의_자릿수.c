#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    while (num / 10 != 0)
    {
        printf("%d\n", num % 10);
        num = num / 10;
    }
   printf("%d", num); 
}