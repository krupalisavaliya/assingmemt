//14.Perform 2D matrix array.
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() 
{
    int matrix[ROWS][COLS];
    int rowSum[ROWS] = {0};
    int colSum[COLS] = {0};
    int j,i;
    
    
    printf("Enter the elements of the %dx%d matrix:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe matrix is:\n");
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nRow sums:\n");
    for (i = 0; i < ROWS; i++)
	 {
        rowSum[i] = 0;
        for (j = 0; j < COLS; j++) 
		{
            rowSum[i] += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i, rowSum[i]);
    }
    
    printf("\nColumn sums:\n");
    for (j = 0; j < COLS; j++) 
	{
        colSum[j] = 0;
        for (i = 0; i < ROWS; i++) 
		{
            colSum[j] += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j, colSum[j]);
    }
    
    return 0;
}
