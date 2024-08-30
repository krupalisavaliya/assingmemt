//5. WAP to print factorial of given number.
#include<stdio.h>
int main()
{
	int num,fact,i;

    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    
    fact = 1;
    for (i = 1; i <= num; ++i) 
	{
        fact *=i;
    }
	
	printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}
