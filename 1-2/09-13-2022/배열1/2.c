// 실습 문제 2
// 크기 5인 int 배열 arr을 아래와 같이 초기화 한다
//  3 1 2 7 5
// 1) arr의 원소중 가장 작은 값을 찾아서 출력
// 2) arr의 원소중 최솟값을 찾고, 최솟값과 그 값이 저장된 인덱스를 출력
// - min_value: 최솟값을 저장할 변수
// - min_index: 현재까지 찾은 최솟값이 배열에 저장된 위치를 기억할 변수

#include <stdio.h>

int main(void) {
    int arr[5] = {3, 1, 2, 7, 5};

    int min_vlaue = 999;
    int min_index = 999;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < min_vlaue) {
            min_vlaue = arr[i];
            min_index = arr[i];
        }
    }

    printf("min_value = %d, min_index = %d", min_vlaue, min_index);
}