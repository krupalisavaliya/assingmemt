//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
void main()
{
    int sum,salary,month;

	printf("current salary:");
	scanf("%d",&salary);
	printf("\nnumber of the month insurance premium :");
	scanf("%d",&month);
	
	sum = salary*month;
	printf("\nInsurance salary:%ld",sum);
		
}
