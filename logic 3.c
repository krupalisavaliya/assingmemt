//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf("\nThe given year is a leap year. /*hurray!/* ");
	}
	else
	{
		printf("\nThe given year is not a leap year.");
	}
	return 0;
}
