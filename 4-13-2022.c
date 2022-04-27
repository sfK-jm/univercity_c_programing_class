#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
   /*
   int x = 0;
   for (int i = 1; i <= 10; i++ )
   {
       x += 2;
       if (x % 8 > 0)
       {
           printf("%d ", x);
       }
       
   }
   */
   
   /*
    int x = 0;
		for (int i = 1; i <= 10; i++) {
			x += 2;
			if (x % 8 == 0) {
				continue;
			}

			printf("%d ", x);
		}
		printf("\n");
*/

/*
    int age;
		printf("나이>> ");
		scanf("%d", &age);

		switch (age) {
		case 18: printf("청소년입니다.\n"); break;
		case 20: printf("성인입니다.\n"); break;
		case 65: printf("노인입니다.\n"); break;
		default: printf("모르겠습니다.\n"); break;
		}
*/

/*
        int n1, n2;
		char ch1, ch2;

		for (int i = 1; i <= 5; i++) {
			printf("문자-정수-문자-정수 입력>> ");
			scanf("%c%d%c%d", &ch1, &n1, &ch2, &n2);
			getchar();
			if (n1 == 0 && n2 == 0) {
				printf("종료합니다.\n");
				break;
			}
			printf("입력한 값은 [%c] [%d] [%c] [%d] 입니다.\n", ch1, n1, ch2, n2);
		}
*/

/*
	int num;
		while (1) 
        {
			printf("정수(0~3)>> ");
			scanf("%d", &num);
			switch (num) {
			case 0: printf("종료합니다.\n"); exit(0);
			case 1: printf("A\n"); break;
			case 2: printf("B\n"); break;
			case 3: printf("C\n"); break;
			default: printf("처리할 수 없습니다.\n"); break;
			}
		}
*/

/*
        int score;
		char grade;

		while (1) {
			printf("\n시험 점수>> ");
			scanf("%d", &score);
			if (score == -1) {
				printf("종료합니다.\n");
				break;
			}

			switch (score / 10) {
			case 10: grade = 'A'; break;
			case 9: grade = 'B'; break;
			case 8: grade = 'C'; break;
			default: grade = 'D'; break;
			}
			printf("%c입니다.\n", grade);
		}
*/

/*
        char ch;
		printf("****를 맞춰 보세요.\n");
		while (1) 
        {
			printf("\n알파벳 소문자>> ");
			scanf("%c", &ch);
			getchar();

			switch (ch) {
			case 'p':
			case 'l':
			case 'a':
			case 'y': printf("%c이(가) 있습니다.\n", ch);  break;
			case '@': printf("영어 단어는 [play] 입니다.\n"); break;
			default:
				printf("%c은(는) 없습니다.\n", ch);
			}
		}
      */

     char answer;
		while (1) {
			printf("계속하시겠습니까(Y/N)?");
			scanf("%c", &answer);
			getchar();

			switch (answer) {
			case 'Y':
			case 'y': printf("게임을 다시 시작합니다.\n"); exit(0);
			case 'N':
			case 'n': printf("게임을 종료합니다.\n"); exit(0);
			default: printf("다시 입력하세요.\n"); break;
			}
		}

}
