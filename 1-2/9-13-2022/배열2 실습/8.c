// 매개변수 선언
#include <stdio.h>

void print_array(int[], int);   // 함수 선언

// void print_array(int a[], int size);

void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main(void)
{
    int intarray[5] = {0, 1, 2, 3, 4};
    print_array(intarray, 5);
    return 0;
}