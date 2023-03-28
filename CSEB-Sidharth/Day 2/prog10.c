#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;

    printf("Enter the rows : ");
    scanf("%d", &row);
    printf("Enter the columns : ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter the matrix\n");
    for (int i =0; i<row; i++)
        for (int j=0; j<col; j++)
            scanf("%d" , &matrix[i][j]);
    
    printf("\nMatrix\n");
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            printf("%d\t" , matrix[i][j]);
        printf("\n");
    }

    printf("\nDiagonals\n");
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            if (i == j)
                printf("%d\t" , matrix[i][j]);
            else
                printf("\t");
        printf("\n");
    }

    printf("\nUpper triangle\n");
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            if (i < j)
                printf("%d\t" , matrix[i][j]);
            else
                printf("\t");
        printf("\n");
    }

    printf("\nLower triangle\n");
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            if (i > j)
                printf("%d\t" , matrix[i][j]);
            else
                printf("\t");
        printf("\n");
    }

    printf("\nNon diagonals\n");
    for (int i =0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            if (i != j)
                printf("%d\t" , matrix[i][j]);
            else
                printf("\t");
        printf("\n");
    }


    return 0;
}