/*6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/
#include <stdio.h>
#define SIZE 3 

void inputMatrix(int matrix[SIZE][SIZE], const char *name) 
{
	int i,j,k;
	
    printf("Enter elements of matrix %s:\n", name);
    for (i = 0; i < SIZE; ++i) 
	{
        for (j = 0; j < SIZE; ++j) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) 
{
	int i,j;
    printf("Matrix\n");
    for (i = 0; i < SIZE; ++i) 
	{
        for (j = 0; j < SIZE; ++j) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) 
{
	int i,j;
    for (i = 0; i < SIZE; ++i) 
	{
        for (j = 0; j < SIZE; ++j) 
		{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) 
{
	int i,j;
    for (i = 0; i < SIZE; ++i) 
	{
        for (j = 0; j < SIZE; ++j) 
		{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) 
{
	int i,j,k;
    for ( i = 0; i < SIZE; ++i) 
	{
        for (j = 0; j < SIZE; ++j) 
		{
            result[i][j] = 0;
            for ( k = 0; k < SIZE; ++k) 
			
			{
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
    int additionResult[SIZE][SIZE], subtractionResult[SIZE][SIZE], multiplicationResult[SIZE][SIZE];

    //  matrices
    inputMatrix(matrix1, "1");
    inputMatrix(matrix2, "2");

    addMatrices(matrix1, matrix2, additionResult);
    subtractMatrices(matrix1, matrix2, subtractionResult);
    multiplyMatrices(matrix1, matrix2, multiplicationResult);

    printf("\nMatrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nAddition Result:\n");
    printMatrix(additionResult);

    printf("\nSubtraction Result:\n");
    printMatrix(subtractionResult);

    printf("\nMultiplication Result:\n");
    printMatrix(multiplicationResult);

    return 0;
}
