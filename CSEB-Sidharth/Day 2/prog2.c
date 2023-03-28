#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    int value = 0;

    printf("Enter the string : ");
    scanf(" %[^\n]s", str);

    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i] == '*')
            value++;
        else if (str[i] == '#')
            value--;
        else 
        {
            printf("Invalid string\n");
            return 0;
        }
    }

    if (value>0) printf("* is greater than #\n");
    else if (value<0) printf("# is greater than *\n");
    else printf("Both # and * are equal\n");

    return 0;
}

