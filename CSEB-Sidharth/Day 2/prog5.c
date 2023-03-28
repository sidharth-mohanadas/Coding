#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr , a=12;

    ptr = &a;

    printf("Addess of a direct : %p\n", &a);
    printf("Addess of a using pointer : %p\n", ptr);
    printf("Value of a : %d\n", a);
    printf("Value of a using pointer : %d\n", *ptr);

    return 0;
}