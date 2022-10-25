// 포인터 별수를 사용하지 않고 포인터를 직접 참조할 수도 있다.
// 다음 두개의 코드는 같은 코드이다
#include <stdio.h>

/*
int main() {
    int a = 100;
    int *ap = &a;
    *ap = 20;
    printf("%d\n", *ap);
}
*/

int main() {
    int a = 100;
    *(&a) = 20;
    printf("%d\n", *(&a));
}