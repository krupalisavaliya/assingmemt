/*23. C Program to Reverse a Number Using FOR Loop
Series Program:*/
#include<stdio.h>
int main()
{
	int num, reversed = 0, original, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (; num != 0; num /= 10) 
	{
        remainder = num % 10;      
        reversed = reversed * 10 + remainder; 
    }

    printf("The reversed number is: %d\n", reversed);

	return 0;
}
