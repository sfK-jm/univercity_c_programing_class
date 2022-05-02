#include <stdio.h>

int main()
{
    int k, n, x;
    printf("k n >> ");
    scanf("%d%d", &k, &n);
    printf("\n");

    for(int i = 1; i <= n; i++)
    {
        printf("정수를 입력하세요>> ");
        scanf("%d", &x);

        if(k%x == 0)
        {
            printf("%d은(는) %d의 배수입니다.\n", x,k);
        }
        else
        {
            printf("%d은(는) %d의 배수가 아닙니다\n", x,k);
        }
        printf("\n");
    }
}