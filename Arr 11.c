/*11.WAP to accept 5 numbers from user and display in reverse order using for 
loop and array*/
#include<stdio.h>
int main()
{
	int A[50],size, i;

	printf("Enter the size of array: ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter your array A[%d] :",i);
		scanf("%d",&A[i]);
	}
	printf("\nThe original array is : ");
	for(i=0;i<size;i++)
	{
		printf("\n%d",A[i]);
	}
	printf("\n");
	printf("\nThe reverse array  is : ");
	for(i=size-1;i>=0;i--)
	{
		printf("\n%d",A[i]);
	}
	return 0;
}
