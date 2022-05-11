#include <stdio.h>
#include <stdbool.h>

bool check_passengers(void);

bool check_passengers(void)
{
    int age, height;
    bool pass = true;

    for (int passenger_no = 1; passenger_no <= 4; passenger_no++)
    {
        printf("입장객%d 나이 키>> ", passenger_no);
        scanf("%d%d", &age, &height);
        if (age < 6 || height < 140)
        {
            pass = false;
            break;
        }
    }

    return pass;
}

int main()
{
    bool passable = check_passengers();
    if (passable)
    {
        printf("\n한 분씩 입장하시겠습니다~\n");
    }
    else
    {
        printf("\n죄송~\n");
    }
}