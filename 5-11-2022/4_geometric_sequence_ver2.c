#include <stdio.h>

int main()
{
    int n, r;
    printf("n r>> ");
    scanf("%d%d", &n, &r);
    int sum = 1;
    for (int i = 1; i <= r; i++)
    {
        sum *= n;
        printf("%d ", sum);
    }
    printf("\n");
}