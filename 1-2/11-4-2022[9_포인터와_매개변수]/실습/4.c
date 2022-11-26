// 실습문제 4 : 결과를 매개변수로 받기
// calc()함수를 작성하시오
// 1) 배열의 총점과 평균은 매개변수(포인터변수)를 통해 돌려준다
// 2) 배열의 원소값이 모두 0이상이면 1(정상)
//    음수가 있으면 -1(오류있음)을 리턴한다

#include <stdio.h>

int calc(int arr[], int size, int *total, double *avg) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("Negative number present in array\n");
            return -1;
        }
        *total += arr[i];
    }
    *avg = *total / 5.0;

    return 1;
}

int main(void) {
    int score[5] = {100, 65, 22, 87, 95};
    int total = 0;
    double avg = 0;
    int errorMessage = calc(score, 5, &total, &avg);
    if (errorMessage == 1) {
        printf("%d %.2f\n", total, avg);
    }
    return 0;
}