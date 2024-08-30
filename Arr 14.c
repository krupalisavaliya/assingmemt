//14.Perform 2D matrix array.
#include<stdio.h>
int main()
{
	int A[50][50],size,i,j;

	printf("Enter the size of array: ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter your value for matrix A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
