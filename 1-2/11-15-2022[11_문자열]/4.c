#include <stdio.h>

int main(void) {
    char str[50] = "This is a string.";
    char *str_p = str;
    scanf("%s", str_p);
    printf("%s\n", str_p);
    printf("%s\n", str);
}