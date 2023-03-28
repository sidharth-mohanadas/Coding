#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15], len, sum=0, j;
    
    printf("Enter the length of the array : ");
    scanf("%d", &len);
    printf("Enter the array : ");
    for (int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    for (j=2; j<sum/2; j++)
        if (sum % j == 0)
        {
            printf("Sum is not a prime\n");
            return 0;
        }

    if (j == sum/2)
        printf("Sum is prime\n");
 
    return 0;
}