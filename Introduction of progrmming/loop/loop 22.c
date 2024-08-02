/* 22. Accept 3 numbers from user using while loop and check each numbers 
palindrome */
#include<stdio.h>
int main()
{
	int num,reverse=0,rem;
	printf("Enter the number = ");
	scanf("%d",&num);
	int copy = num;
	
	while(num!=0)
	{
		rem = num % 10;
		reverse = (reverse * 10 ) + rem;
		num = num / 10;
	}
	if(reverse == copy)
	{
		printf("\n%d is the pallindron number",copy);
	}
	else
	{
			printf("\n%d is the not pallindron number",copy);
	}
	
	return 0;
}
