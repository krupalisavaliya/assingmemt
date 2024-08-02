//9. Write a program make a summation of given number (E.g., 1523 Ans: -11).
#include<stdio.h>
int main()
{
	int number, sum = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = abs(number); 
    while (number != 0)
	 {
        remainder = number % 10;
        sum += remainder;
        number = number / 10;
    }

   
    printf("Sum of digits: %d\n", sum);

    return 0;
}
