//4. WAP to print table up to given numbers.
#include<stdio.h>
int main()
{
    int n;
    int i,j;

    // Prompt user for input
    printf("Enter a number to print multiplication tables up to: ");
    scanf("%d", &n);

    // Outer loop for each number from 1 to n
    for (i = 1; i <= n; ++i)
	 {
        printf("Multiplication table for %d:\n", i);

        // Inner loop for multiplication table from 1 to 10
        for ( j = 1; j <= 10; ++j) 
		{
            printf("%d * %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Print a blank line after each table
    }

    return 0;
}


