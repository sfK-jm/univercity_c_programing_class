#include <stdio.h>

int main()
{
    int kor = 100, eng = 85, math = 92;
    // double tot = kor + eng + math; (x)
    double tot = kor + eng + math;
    double avg = tot / 3;
    printf("average = %.2f\n", avg);
}