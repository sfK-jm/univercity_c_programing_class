#include <stdio.h>
#include <stdbool.h>

int check_passengers(void);


int check_passengers(void)
{
    int age, height;

    for (int passenger_no = 1; passenger_no <= 4; passenger_no++)
    {
        printf("입장객%d 나이 키>> ", passenger_no);
        scanf("%d%d", &age, &height);
        if (age < 6 || height < 140)
        {
            return passenger_no;
            break;
        }
    }

    return 0;
}

int main(void)
{
    int nopass_passenger_no = check_passengers();
		if (nopass_passenger_no == 0) 
        {
			
			printf("\n한 분씩 입장하시겠습니다~\n");
		}
		else 
        {
			
			printf("\n%d번 손님 때문에 못 들어가십니다. \n죄송~\n", nopass_passenger_no);
		}
	
}