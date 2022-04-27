

#include <stdio.h>

int main() {
    char i = 65;
    printf("%d %c\n", 65, 65);
    printf("%d %c\n", i, i);
    
    char ch = 'A';
    printf("%d %c\n", 'A', 'A');
    printf("%d %c\n", ch, ch);
    
    return 0;
    
}


/*
#include <stdio.h>

int main(void) {
    
    char x;
    printf("문자 하나를 입력하세요>> ");
    scanf("%c", &x);
    
    printf("문자 %c의 아스키 코드는 %d입니다\n", x, x);
}
*/

// 오류 문제

/*
#include <stdio.h>

int main (void) {
    char ch = '1';
    printf("문자 '%c'의 아스키 코드는 %d 입니다.\n", ch, ch);
    
    char i = 1;
    printf("문자 %c의 아스키 코드는 %d입니다.\n", i,i);
    
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char ch1 = 'A';
    char ch2 = ch1 + 3;
    printf("%c + 3 = %c\n", ch1, ch2);
    
    return 0;
}
*/

/*

#include <stdio.h>

int main(void) {
    char x;
    printf("알파벳 대문자 입력>> ");
    scanf("%c", &x);
    int y = x + 32;
    printf("알파벳 '%c'의 소문자는 '%c'입니다.", x, y );
    return 0;
}
*/
 
/*
#include <stdio.h>

int main(void) {
    char str[100] = "This is a string.";
    printf("문자 배열 str에 저장된 문자열은 : %s\n", str);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char x[100] = "This is";
    char y[100] = "a string.";
    
    printf("str1: %s\n", x);
    printf("str2: %s\n", y);
    
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char x[100] = "This is";
    char y[100] = "a string.";
    
    printf("str1str2: %s %s\n", x, y);
 
    return 0;
}
*/

/*

#include <stdio.h>

int main(void) {
    char str[100];
    
    printf("문자열 입력>> ");
    scanf("%s", str );
    
    printf("문자 배열 str에 저장된 문자열은 : %s\n", str);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    char str[100];
    
    printf("본인 이름을 입력하세요>> ");
    scanf("%s", str);
    
    printf("당신의 이름은 %s입니다.\n", str);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[100];
    
    printf("문자열 세개 입력>> ");
    scanf("%s%s%s", str1, str2, str3);
    
    printf("입력 받은 문자열 3개는 : %s, %s, %s\n", str1, str2, str3);
    
    return 0;
    }

*/

/*
#include <stdio.h>

int main() {
    char x[100], y[100], z[100];
    
    printf("이름 나이 소속>> ");
    scanf("%s%s%s", x, y, z);
    
    printf("이름은 %s, 나이는 ,%s, 소속은 %s입니다.\n", x, y, z);
    return 0;
    
}
*/

/*
#include <stdio.h>

int main () {
    printf("문자 두개를 입력>> ");
    char ch1 = getchar();
    char ch2 = getchar();
    
    printf("입력받은 문자는: ");
    putchar(ch1);
    putchar(ch2);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    int x = 1;
    printf("x = %d\n", x);
    printf("엔터 키를 누르세요...");
    getchar();
    
    x = x + 1;
    printf("x = %d\n", x);
    printf("엔터 키를 누르세요...");
    getchar();
    
    x = x + 1;
    printf("x = %d\n", x);
    
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char str[100];
    printf("문자열 입력>> ");
    scanf("%s", str);
    
    printf("<%s>\n", str);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char str[100];
    printf("문자열 입력>> ");
    gets(str);
    printf("<%s>\n", str);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    puts("puts()은 문자열 출력 함수");
    
    char str [100];
    printf("문자열 입력>> ");
    gets(str);
    puts(str);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char str[100];
    printf("주소를 입력하세요>> ");
    gets(str);
    puts(str);
}
 */
