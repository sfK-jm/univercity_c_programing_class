#include <stdio.h>
#include <stdlib.h>

typedef struct {
    /* data */
    char title[100];
    int press_year;
    int pages;
} BOOK;

void input_book(BOOK* book) {
    printf("title>> ");
    scanf("%s", book->title);
    printf("press_year>> ");
    scanf("%d", &book->press_year);
    printf("pages>> ");
    scanf("%d", &book->pages);
}

void print_book(BOOK* book) {
    printf("%s, %d, %d pages", book->title, book->press_year, book->pages);
}

int main(void) {
    BOOK* book = malloc(sizeof(BOOK));
    input_book(book);
    print_book(book);
}