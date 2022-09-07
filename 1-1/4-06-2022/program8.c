#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    bool is_leaf;
        printf("year = ");
        scanf("%d", &year);

        if (year % 400 == 0) {
            is_leaf = true;
        }
        else if (year % 100 == 0) {
            is_leaf = false;
        }
        else if (year % 4 == 0) {
            is_leaf = true;
        }
        else {
            is_leaf = false;
        }

        if (is_leaf) {
            printf("%d is a leaf year\n", year);
        }
        else {
            printf("%d is NOT a leaf year\n", year);
        }
    }