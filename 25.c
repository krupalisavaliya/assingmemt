//25. Accept 5 expense from user and find average of expense.
#include<stdio.h>
int main()
{
	 float exp1 , exp2, exp3,exp4,exp5;
	printf("Enter expense 1 : ");
	scanf("%f",&exp1);
	printf("Enter expense 2 : ");
	scanf("%f",&exp2);
	printf("Enter expense 3 : ");
	scanf("%f",&exp3);
	printf("Enter expense 4 : ");
	scanf("%f",&exp4);
	printf("Enter expense 5 : ");
	scanf("%f",&exp5);
	
	float sum = exp1 +exp2 +exp3 +exp4 + exp5;
	float avg= sum / 5;
	
	printf("sum =%.2f, Average = %.2f",sum,avg);
}
