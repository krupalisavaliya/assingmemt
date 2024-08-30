/*10. Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/

#include<stdio.h>
int main()
{
	 int number, first, last;

    printf("Enter a number: ");
    scanf("%d", &number);
    last = number % 10;
    while (number >= 10) 
	{
        number = number / 10;
    }
        first = number;
    int sum = first + last;
    printf("Sum of first and last 2: %d\n", sum);

    return 0;
}
