#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    char arr[15], temp;
    
    printf("Enter the length of the array : ");
    scanf("%d", &len);
    printf("Enter the array : ");
    for (int i=0; i<len; i++)
    {
        scanf(" %c", &arr[i]);
        if (arr[i] == '0')
            arr[i] = '$';
    }

    for (int i=0; i<len/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }

    for (int i=0; i<len; i++)
     printf("%c ", arr[i]);
 
    return 0;
}