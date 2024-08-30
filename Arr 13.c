/*13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array */
#include<stdio.h>
int main()
{
	int i,num[50],count=0;
	for(i=0;i<5;i++)
	{
		printf("\nEnter your number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",num[i]);


		if(num[i] % 2 == 0)
		{
		printf("\nthe number is even %d",num[i]);
		}
		else 
		{
			printf("\nthe number is odd  %d",num[i]);
		}
	}
	return 0;
}
