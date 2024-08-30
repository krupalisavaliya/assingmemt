//18. Calculate person’s Annual salary
#include<stdio.h>
void main()
{ 
	long int weeklysalary,ei,totalAmount;
	printf("Enter your weekly salary : ");
	scanf("%d",&weeklysalary);
	printf("\nEnter your individual income :");
	scanf("%d",&ei);
	totalAmount=weeklysalary*ei;
	printf("\nYour annual salary :%d",totalAmount);
}
