#include <stdio.h>

int main()
{
    char c = 100;
    unsigned char uc = 100;
    short s = 100;
    unsigned short us = 100;
    int i = 100;
    unsigned int ui = 100;
    long l = 100;
    unsigned long ul = 100;
    long long ll = 100;
    unsigned long long ull = 100;

    printf("char : %d\n", c);
    printf("unisgned char : %d\n", uc);
    printf("short : %d\n", s);
    printf("unsigned short : %d\n", us);
    printf("int : %d\n", i);
    printf("unsigned int : %d\n", ui);
    printf("long : %ld\n", l);
    printf("unsigned long: %lu", ul);
    printf("long long : %lld\n", ll);
    printf("unsigned long long : %llu\n", ull);

    return 0;
}