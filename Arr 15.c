//15.Store 5 numbers in array and sort it in ascending order.
#include<stdio.h>
int main()
{
	int i,num[50],j,temp;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the value num[%d] :",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",num[i]);
	}
	printf("\nThe ascending order is : ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(num[i]<num[j])
			{
				temp = num[j];
				num[j] = num[i];
				num[i]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",num[i]);
	}

	return 0;
}
