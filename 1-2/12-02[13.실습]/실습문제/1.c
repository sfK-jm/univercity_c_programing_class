// n명의 키를 입력받아서 추ㅜㄹ력한다
// 배열을 동적으로 할당한다
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    double *height = (double *)malloc(n * sizeof(double));
    if (height == NULL) return 0;

    printf("heights = ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &height[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%.2f ", height[i]);
    }
    free(height);
}