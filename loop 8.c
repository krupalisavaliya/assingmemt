/*8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/
#include<stdio.h>
int main()
{
	int number, max , remainder;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0)
	 {
        remainder = number % 10;
        if (remainder > max)
	    {
            max = remainder;
        }
        number = number / 10;
    }
    
    printf("Max number is: %d\n", max);

    return 0;
}
