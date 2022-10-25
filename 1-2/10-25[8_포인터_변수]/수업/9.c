#include <stdio.h>

typedef struct {
    int int_value;
    char char_value;
} mystruct;

int main(void) {
    mystruct st = {10, 't'};
    int *ip = &st.int_value;
    char *cp = &st.char_value;
    printf("%d %c\n", *ip, *cp);
    return 0;
}