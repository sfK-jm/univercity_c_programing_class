// 실습문제9 주사위 1=1

#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int cnt = 0;
    for (int red = 1; red <= 6; red++)
    {
        for (int green = 1; green <= 6; green++)
        {
            for (int blue = 1; blue <= 6; blue++)
            {
                if (red + green + blue == n)
                {
                    cnt++;
                    printf("%d %d %d\n", red, green, blue);
                }
            }
        }
    }
    printf("%d cases\n", cnt);
}
