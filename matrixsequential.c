

/**
 * C program to multiply two matrices
 */

#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int a[SIZE][SIZE]; // Matrix 1 
    int b[SIZE][SIZE]; // Matrix 2
    int c[SIZE][SIZE]; // Resultant matrix
    
    int row, col, i, sum;


    /* Input elements in first matrix from user */
    printf("Enter elements in matrix a of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix b of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &b[row][col]);
        }
    }

    /*
     * Multiply both matrices a*b
     */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            /*
             * Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum.
             */
            for(i=0; i<SIZE; i++)
            {
                sum += b[row][i] * b[i][col];
            }

            c[row][col] = sum;
        }
    }

    /* Print product of the matrices */
    printf("\nProduct of matrix a * b = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}


