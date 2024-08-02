/*13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array */
#include <stdio.h>
#define SIZE 5
int main() 
{
    int numbers[SIZE];
    int i;
    
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    
    printf("\nThe numbers and their even/odd status are:\n");
    for (i = 0; i < SIZE; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            printf("Number %d is even.\n", numbers[i]);
        } else {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
    
    return 0;
}
