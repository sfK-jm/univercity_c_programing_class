#include <stdio.h>

int main() {
    char str1[100] = {"Lady, won't you save me?"};
    char str2[100] = {"My heart belongs to you."};
    char str3[100] = {"Lady, can you forgive me?"};
    char str4[100] = {"For all I've done to you."};
    char str5[100] = {"Lady, oh, lady"};

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == 'a') {
            str1[i] = 'i';
        }
    }
    printf("%s\n", str1);

    for (int i = 0;; i++) {
        if (str2[i] == 'a') {
            str2[i] = 'i';
        }
        if (str2[i] == '\0') break;
    }
    printf("%s\n", str2);

    int i = 0;
    while (str3[i] != '\0') {
        if (str3[i] == 'a') {
            str3[i] = 'i';
        }
        i++;
    }
    printf("%s\n", str3);

    for (char *cp = str4; *cp != '\0'; cp++) {
        if (*cp == 'a') {
            *cp = 'i';
        }
    }
    printf("%s\n", str4);

    char *cp = str5;
    while (*cp != '\0') {
        if (*cp == 'a') {
            *cp = 'i';
        }
        cp++;
    }
    printf("%s\n", str5);
}