// 페이지 수가 기재된 책만 출력하기
#include <stdio.h>

typedef struct {
    char name[50];
    char author[50];
    int press_year;
    int n_pages;
} BOOK;

void print_book_info(BOOK book) {
    printf("%s, %s, %d, %d\n", book.name, book.author, book.press_year,
           book.n_pages);
}

int main(void) {
    BOOK book_arr[5] = {
        {"컴퓨터 알고리즘의 이해", "이상호", 2015},
        {"쉽게 배우는 알고리즘", "문병로", 2018, 528},
        {"C 기초 플러스", "스티븐 프라타", 2017, 1216},
        {"운영체제", "A. Silberschatz", 2020},
        {"GoF의 디자인 패턴", "에릭 감마 외", 2015, 496},
    };

    printf("제목, 저자, 출판년도, 페이지수:\n");
    for (int i = 0; i < 5; i++) {
        if (book_arr[i].n_pages > 0) {
            print_book_info(book_arr[i]);
        }
    }
    return 0;
}