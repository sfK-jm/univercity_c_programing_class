#include <stdio.h>
#include <stdbool.h>

int main(void) {


    char addr[100];
		printf("주소>> ");
		gets(addr);
		printf("주소는 '%s' 입니다.\n", addr);
}