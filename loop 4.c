//4. WAP to print table up to given numbers.
#include <stdio.h>
void main()
{
	int n,i;
	start:
	printf("\n Enter any number for multiplication table:");
	scanf("%d",&n);

	for(i=1; i<=10; i++)
	{
		printf("\n %d * i = %d", n,n*i);
	}
	char ans;
	printf("\nDo you Want to continue(y/n)?:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
	else {
		goto end;
	}
	end:
		printf("\nThank You For Visiting");
		return 0;

}
