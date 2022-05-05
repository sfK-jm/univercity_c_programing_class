#include <stdio.h>

int get_positive(void);
int get_positive(void)
{ // 또는 int get_positive() 
    int pos;
    printf("양수값 하나를 입력하세요 : ");
    scanf("%d", &pos);
    return pos;
}
int main(void) 
{
    int n;
    // 반환값을 사용할 필요 없을 때는 그냥 get_positive();
    n = get_positive();
    printf("n = %d\n", n);
}