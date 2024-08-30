/*6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/
#include<stdio.h>
int main()
{
	int x[100][100],y[100][100],i,j,k,size;
	int sum[100][100], sub[100][100],mul[100][100];
	char calu;

	printf("\nEnter the size for array:");
	scanf("%d",&size);

	printf("It is a calculator in 2d array.");
	printf("\nfor Addition(A or a) or for multiplication(M or m) or for Subtraction(S or s):");
	scanf("\n%c",&calu);

	if(calu == 'A' || calu == 'a')
	{

	//for x matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for x[%d][%d] :",i,j);
			scanf("\n%d",&x[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

	//for y matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for y[%d][%d]: ",i,j);
			scanf("\n%d",&y[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	// for addition
	printf("\nThe sum of th matrix is :");
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sum[i][j] = x[i][j] + y[i][j];
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}

	}	

	else if (calu == 'S' || calu == 's')
	{
		//for x matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for x[%d][%d] :",i,j);
			scanf("\n%d",&x[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

	//for y matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for y[%d][%d]: ",i,j);
			scanf("\n%d",&y[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	// for subtraction
	printf("\nThe subtraction of th matrix is :");
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sub[i][j] = x[i][j] - y[i][j];
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}


	}

	else if (calu == 'M' || calu == 'm')
	{
		//for x matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for x[%d][%d] :",i,j);
			scanf("\n%d",&x[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

	//for y matrix
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the value for y[%d][%d]: ",i,j);
			scanf("\n%d",&y[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	// for multipliaction
	printf("\nThe multiplication of the matrix is :");
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			for(k=0;k<size;k++)
			{

			mul[i][j] = mul[i][j] + x[i][k] * y[k][j];

			}
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}

	}
	return 0;
}
