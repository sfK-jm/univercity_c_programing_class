#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int);
bool is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main(void) {
    for (int x = 2; x <= 30; x++) {
        if (is_prime(x)) printf("%d ", x);
    }
    return 0;
}