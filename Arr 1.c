//1. Write a program to find out the max number from given array using function.
#include<stdio.h>
int main()
{
	int findMax(int arr[], int size);
	int n,i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }

    
    int max = findMax(arr, n);

   
    printf("The maximum number in the array is: %d\n", max);
    
    int findMax(int arr[],int size);
	max = arr[0]; 

   
    for (i = 1; i < size; i++)
	{
        if (arr[i] > max)
	    {
            max = arr[i];
        }
    }

    return max;

    return 0;
}
