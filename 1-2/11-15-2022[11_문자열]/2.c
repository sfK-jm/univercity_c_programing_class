#include <stdio.h>

int main(void) {
    char str[50] = "Today is Monday.";
    printf("%s\n", str);

    str[9] = 'S';
    str[10] = 'u';
    printf("%s\n", str);
}