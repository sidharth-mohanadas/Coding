#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2 , a=100, b=20, temp;
    ptr1 = &a;
    ptr2 = &b;

    printf("Result = %d\n", *ptr1 / *ptr2);

    return 0;
}