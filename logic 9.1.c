/*9.1  C program to check Uppercase or Lowercase or Digit or Special Character.*/
//with the help of ascii number.
// I have done number---> character, in ascii table, misunderstanding of question.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any value:");
	scanf("%d",&num);

	if ( num>=65 && num<=90)
	{
		printf("The value of the num is :%c",num);
		printf("\nThe value you have print is a uppercase character for ascii value. ");
	}
	else if ( num>=97 && num<=122)
	{
		printf("The value of the num is :%c",num);
		printf("\nThe value you have print is a lowercase character for ascii value. ");
	}
	else if (num>=48 && num<=57)
	{
		printf("The digit of the num is %c ",num);
		printf("\nThe value you have print is a digit character for ascii value. ");
	}
	else if (num>=32  && num<=47 || num>=58 && num<=64 || num>=91 && num<=96 || num>=123 && num<=126 )
	{
		printf("The special character of the num is %c ",num);
		printf("\nThe value you have print is a digit character for ascii value. ");
	}
	else
	{ 
	printf("default",num);
	}
	return 0;
}
