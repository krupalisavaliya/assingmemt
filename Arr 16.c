//16.Accept 5 numbers from user and perform sum of array.
#include<stdio.h>
int main()
{
	int i,num[50],sum=0;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the value num[%d] :",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",num[i]);
		sum += num[i];
	}
	printf("\nThe sum of array is %d ",sum);
	return 0;
}
