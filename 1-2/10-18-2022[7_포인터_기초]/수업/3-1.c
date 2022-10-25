#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    bool is_prime;
    for (int x = 2; x <= 30; x++) {
        is_prime = true;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) printf("%d ", x);
    }
}