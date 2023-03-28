#include <stdio.h>
#include <stdlib.h>

int sample (int n)
{
    int i = 0, s = 0, r, p;

    while (n>0)
    {
        r = n % 10;
        p = 8 ^ i;
        s += p * r;
        i++;
        n /= 10;
    }
    return s;
}

int main()
{
    int n = 5;
    printf("Result = %d\n", sample(n));
    return 0;
}