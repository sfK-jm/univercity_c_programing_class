#include <stdio.h>

int main() {
    char *parr[5];
    parr[0] = "dog";
    parr[1] = "elephant";
    parr[2] = "horse";
    parr[3] = "tiger";
    parr[4] = "lion";

    for (int i = 0; i < 5; i++) {
        printf("%s\n", parr[i]);
    }
}