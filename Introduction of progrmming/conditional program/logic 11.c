//11. WAP to find number is even or odd using ternary operator.
#include <stdio.h>

int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? 
	printf("The number %d is even.\n", number) :
    printf("The number %d is odd.\n", number);

    return 0;
}
