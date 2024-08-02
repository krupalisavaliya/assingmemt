/*5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/
#include <stdio.h>
int main()
{
	int x[50],y[50],i,size,j,temp;
	int choice;
	char yes;
	start:
	printf("\nEnter you size for array:");
	scanf("%d",&size);
	
	printf("\Enter your choice , for ascending(1)  or decending(2):");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				printf("\n the array for x[%d] : ", i);
				scanf("%d",&x[i]);
			}
				for(i=0;i<size;i++)
			{
				printf("\n%d",x[i]);
			}
	
				printf("\nThe ascending order  for x array is :");
				for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
				if (x[i] < x[j])
				{
				temp = x[j];
				x[j] = x[i];
				x[i] = temp;
				
				}
			
				}
				}
				for(i=0;i<size;i++)
				{
				printf("\n%d",x[i]);
				
				}
				//for second array
				for(i=0;i<size;i++)
			{
				printf("\n the array for y[%d] : ", i);
				scanf("%d",&y[i]);
			}
				for(i=0;i<size;i++)
			{
				printf("\n%d",y[i]);
			}
	
				printf("\nThe ascending order  for y array is :");
				for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
				if (x[i] < x[j])
				{
				temp = x[j];
				x[j] = x[i];
				x[i] = temp;
				
				}
			
				}
				}
				for(i=0;i<size;i++)
				{
				printf("\n%d",y[i]);
				
			}
				
		break;
		
		case 2:
				for(i=0;i<size;i++)
			{
				printf("\n the array for x[%d] : ", i);
				scanf("%d",&x[i]);
			}
				for(i=0;i<size;i++)
			{
				printf("\n%d",x[i]);
			}
	
			printf("\nThe decending order for x array is :");
				for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
			{
					if (x[i] > x[j])
				{
				temp = x[j];
				x[j] = x[i];
				x[i] = temp;
				
				}
			
			}
			}
				for(i=0;i<size;i++)
			{
			printf("\n%d",x[i]);
			}
			//y array
			for(i=0;i<size;i++)
			{
				printf("\n the array for y[%d] : ", i);
				scanf("%d",&y[i]);
			}
				for(i=0;i<size;i++)
			{
				printf("\n%d",y[i]);
			}
	
			printf("\nThe decending order  of y array is :");
				for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
			{
					if (x[i] > x[j])
				{
				temp = x[j];
				x[j] = x[i];
				x[i] = temp;
				
				}
			
			}
			}
				for(i=0;i<size;i++)
			{
			printf("\n%d",y[i]);
			}
			
		break;
		
		default:
			printf("INVALID VALUE!!!");	
		}
			//continue
			
	printf("\nEnter your choice, to continue'y' and no'n'.");
				scanf(" %c",&yes);
		
			if ( yes == 'y' || yes == 'Y')
			{
				goto start;	
			}
			else
			{
				goto end;
			}
			
end:
	printf("Thank you !!!");
	return 0;
}

