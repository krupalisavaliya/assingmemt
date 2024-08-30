//13. calculate the Factorial of a Given Number using while loop.
#include <stdio.h>
int main() 
{
    int num, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
 
    if (num < 0)
	 {
        printf("Factorial of a negative number is not defined\n");
    } 
	else
	{
        
        int i = num;
        while (i > 1)
	    {
            factorial *= i;
            i--;
        }

        
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}
