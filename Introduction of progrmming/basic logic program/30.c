//30. WAP to convert years into days and days into years.
#include <stdio.h>
void main()
{
	int days,years,choice,a,b,remaining;
	printf("Here is the information \t to conver days into years choose 1 \t if you want to vonver years into days choose 2:");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("Days : ");
		scanf("%d",&days);
		years = days / 365;
		remaining = days % 365;
		printf("\n The days you entere :%d",days);
		printf("\n Years it has : %d",years);
		printf("\n remaining days : %d",remaining);
	}
	else if(choice == 2)
	{
		printf("years : ");
		scanf("%d",&years);
		days = years * 365;
		printf("\n The years you entere :%d",years);
		printf("\n days it has : %d",days);
	
	}
}

