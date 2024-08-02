//14. Accept 5 numbers from user and find those numbers factorials.
#include <stdio.h>

int main()
{
	int num,fact,i;

    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
    printf("Number %d: ", i);
    

    
    fact = 1;
    //for (i = 1; i < 5; i++)
    for (i = 1; i <= num; ++i) 
	{
        fact *=i;
    }
	
	printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}
