#include <stdio.h>
#include <stdbool.h>

int main(void) {



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