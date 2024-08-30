//9. C Program to Check Uppercase or Lowercase or Digit or Special Character.
//with the help of ascii number.
#include<stdio.h>
int main()
{
	char num;
	printf("Enter any character :");
	scanf("%c",&num);

	if ( num>=65 && num<=90)
	{
		printf("%c : is a uppercase.",num);
	}
	else if ( num>=97 && num<=122)
	{
		printf("%c : is a lowercase.",num);
	}
	else if (num>=48 && num<=57)
	{
		printf("%c : is a digit.",num);
	}
	else
	{ 
	printf("%c : is a special character.",num);
	}
	return 0;
}
