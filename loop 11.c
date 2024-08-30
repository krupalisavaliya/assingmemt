//11. Accept 5 names from user at run time.
#include<stdio.h>
int main()
{
    char name,max; 
    int i;
    printf("Enter %d names:\n",max );
    for (i = 0; i < max; ++i)
    {
        printf("Enter name %d: ", i + 1);
        scanf(" %d", name,i); 
    }
    printf("\nEntered names are: ");
    for (i = 0; i < max; ++i)
	{
        printf("%d", i + 1, name,i);
    }

    return 0;	
}
