// 키보드로 실수 3개를 입력받아 배열에 저장한 후, 입력 받은 값들을 출력해라

# include <stdio.h>

int main()
{
    float arr[3];

    printf("실수 3개 입력>> ");
    scanf("%f%f%f", &arr[0], &arr[1], &arr[2]);

    printf("arr[0] = %.1f\n", arr[0]);
    printf("arr[1] = %.1f\n", arr[1]);
    printf("arr[2] = %.1f\n", arr[2]);

    return 0;
}