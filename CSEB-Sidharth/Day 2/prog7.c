#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2 , a=100, b=200, temp;
    ptr1 = &a;
    ptr2 = &b;

    printf("Before swapping : a = %d, b = %d\n", *ptr1, *ptr2);
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping : a = %d, b = %d\n", *ptr1, *ptr2);

    return 0;
}