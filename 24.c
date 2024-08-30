//24.Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
void main()
{
	float em1 , em2, em3,em4,em5;
	printf("Enter em1 : ");
	scanf("%f",&em1);
		printf("Enter em2 : ");
	scanf("%f",&em2);
		printf("Enter em3 : ");
	scanf("%f",&em3);
		printf("Enter em4: ");
	scanf("%f",&em4);
		printf("Enter em5 : ");
	scanf("%f",&em5);
	
	float sum = em1 +em2 +em3 +em4 + em5;
	float avg= sum / 5;
	
	printf("sum =%.2f, Average = %.2f",sum,avg);
}
