/*1. Write a C program to accept two integers and check whether they are equal 
or not*/
#include<stdio.h>
int main ()
{
	int num1, num2;

    // Input first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Input second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check if the two integers are equal
    if (num1 == num2)
    {
    printf("The two integers are equal:\n");
    } 
    else
    {
    printf("The two integers are not equal:\n");
    }

    return 0;
}

