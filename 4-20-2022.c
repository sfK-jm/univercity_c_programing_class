#include <stdio.h>
#include <stdbool.h>

int main(void) {
/*
    char  title[100], author[100], press[100];
		printf("제목>> ");
        scanf("%s", title);
		printf("저자>> "); 
        scanf("%s", author);
		printf("출판사>> ");
        scanf("%s", press);
		printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n", title, author, press);
*/

/*
    int x = 0;
		while (1) {
			x++;
			printf("%d\n", x);
			printf("계속하려면 엔터 키를 입력하세요...\n");
			getchar();
		}
*/





/*
    char addr[100];
		printf("주소>> ");
		gets(addr);
		printf("주소는 '%s' 입니다.\n", addr);
*/

/*

		printf("문자 '%c'의 아스키코드 값은 %d\n", 'A', 'A');
		printf("문자 '%c'의 아스키코드 값은 %d\n", 'Z', 'Z');
		printf("알파벳 대문자의 아스키코드 값 범위는 %d ~ %d\n", 'A', 'Z');

		printf("문자 '%c'의 아스키코드 값은 %d\n", 'a', 'a');
		printf("문자 '%c'의 아스키코드 값은 %d\n", 'z', 'z');
		printf("알파벳 소문자의 아스키코드 값 범위는 %d ~ %d\n", 'a', 'z');

		printf("문자 '%c'의 아스키코드 값은 %d\n", '0', '0');
		printf("문자 '%c'의 아스키코드 값은 %d\n", '9', '9');
		printf("숫자의 아스키코드 값 범위는 %d ~ %d\n", '0', '9');
*/

/*
char ch, ch_new;

		for (int i = 1; i <= 4; i++) 
        {
			printf("알파벳 입력>> ");
			scanf("%c", &ch);
			getchar();

			if ('A' <= ch && ch <= 'Z') 
            {
				ch_new = ch + 32;
				//ch_new = ch + ('a' - 'A');
			}
			else 
            {
				ch_new = ch - 32;
				//ch_new = ch - ('a' - 'A');
			}

			printf("%c -> %c\n", ch, ch_new);

        }
*/

        char ch1, ch2, ch3;
		int key;
		printf("암호문-암호키>> ");
		scanf("%c%c%c%d", &ch1, &ch2, &ch3, &key);
		printf("암호문: %c%c%c\n", ch1, ch2, ch3);
		printf("암호키: %d\n", key);

		int crd1, crd2, crd3;
		crd1 = (ch1 - 'A' + key) % 26;
		crd2 = (ch2 - 'A' + key) % 26;
		crd3 = (ch3 - 'A' + key) % 26;
		printf("좌표: %d, %d, %d\n", crd1, crd2, crd3);


}