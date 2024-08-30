/*17.Calculate 5 numbers from user and calculate number of even and odd using 
of while loop*/
#include<stdio.h>
int main()
{
	int num, evenCount = 0, oddCount = 0;
    int i = 0;

    while (i < 5) 
	{
        
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) 
		{
            evenCount++;
        }
		 else 
		{
            oddCount++;
        }

        i++;
    }

    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
	return 0;
}

