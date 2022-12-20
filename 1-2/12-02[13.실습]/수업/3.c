#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char inp_str[100] = {0};
    char *str_arr[5] = {0};
    int size;

    for (int i = 0; i < 5; i++) {
        printf(">> ");
        scanf("%s", inp_str);
        //  scanf_s("%s", inp_str, sizeof(inp_str));
        size = strlen(inp_str) + 1;
        str_arr[i] = (char *)malloc(sizeof(char) * size);
        if (str_arr[i] != NULL) {
            strcpy(str_arr[i], inp_str);
            // strncpy(str_arr[i], size, inp_str, size);
        }
    }

    for (int i = 0; i < 5; i++) {
        if (str_arr[i] != NULL) {
            printf("%s\n", str_arr[i]);
        }
    }
    for (int i = 0; i < 5; i++) {
        free(str_arr[i]);
    }
}