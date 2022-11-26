#include <stdio.h>
#include <string.h>

void mystrcpy(char *dest, char *src) {
    // null char '\0'까지 복사할 수 있도록 while 대신 do _ while 사용
    do {
        *dest = *src;
        src++;
        dest++;
    } while (*src != '\0');
}

int main() {
    char str1[100] = "apple";
    char str2[100] = "banana";
    char tmp[100] = {0};
    printf("before: %s %s\n", str1, str2);
    // strcpy(tmp, str1);   // tmp <- str1
    // strcpy(str1, str2);  // str1 <- str2
    // strcpy(str2, tmp);   // str<- tmp
    mystrcpy(tmp, str1);
    mystrcpy(str1, str2);
    mystrcpy(str2, tmp);
    printf("after: %s %s\n", str1, str2);
}