//15.Store 5 numbers in array and sort it in ascending order.
#include <stdio.h>
#define SIZE 5

void selectionSort(int arr[], int size);

int main() 
{
    int numbers[SIZE];
    int i,j;
    
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    selectionSort(numbers, SIZE);
    
    printf("\nThe sorted array in ascending order is:\n");
    for (i = 0; i < SIZE; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}

void selectionSort(int arr[], int size) 
{
    int i, j, minIndex, temp;
    
    for (i = 0; i < size - 1; i++) 
	{
        minIndex = i;
        for (j = i + 1; j < size; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }

        if (minIndex != i) 
		{
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
