#include <stdio.h>
int main()
{
    printf("\n=============실습7-1=============\n");
            int money = 10000;
            int price, qty;

            printf("현재 소지금은 %d원입니다.\n", money);
            printf("아이스크림 단가는 얼마입니까? ");
            scanf("%d", &price);
            printf("아이스크림 몇 개를 삽니까? ");
            scanf("%d", &qty);

            int pay = price * qty;    // 지불할 금액
            int change = money - pay;

            printf("아이스크림 %d개는 %d원입니다.\n", qty, pay);
            printf("%d원을 내면 거스름돈은 %d원입니다.\n", money, change);

    int five_thd, one_thd, five_hnd;

            five_thd = change / 5000;

            change = change % 5000; // 5천원권 빼고 거슬러줄 금액
            one_thd = change / 1000;

            change = change % 1000; // 5천원권, 1천원권 빼고 거슬러줄 금액
            five_hnd = change / 500;

            printf("5천원권 %d장, 1천원권 %d장, 5백원 동전 %d개입니다.\n",
                five_thd, one_thd, five_hnd);


}