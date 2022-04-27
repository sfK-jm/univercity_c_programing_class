

#include <stdio.h>

int main() {
    char x[100], y[100], z[100];
    printf("제목>>  ");
    gets(x);
    printf("저자>> ");
    gets(y);
    printf("출판사>> ");
    gets(z);
    printf("제목은 %s, 저자는 %s, 출한사는 %s 입니다\n",x,y,z);
    
    return 0;
}


/*
#include <stdio.h>

int main(void) {
    
    for(int x = 0; x <= 100; x++)
    {
    printf("x = %d\n", x);
    printf("엔터 키를 누르세요...");
    getchar();
    }
   
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    int v;
    char x[100], y[100], z[100];
    printf("주소>> ");
    scanf("%d,%s,%s,%s",&v,x,y,z);
    
    printf("'(%d) %s %s %s' 입니다.", v, x, y, z);
}
*/