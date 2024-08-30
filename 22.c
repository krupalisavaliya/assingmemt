/* 22. Calculate compound interest(Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t*/
#include<stdio.h>
void main()
{
	int Amount ,cint,P,r,t;
	printf("Enter r :");
	scanf("%d",&r);
	printf("Enter p:");
	scanf("%d",&P);
	printf("Enter t:");
	scanf("%d",&t);
	Amount= P*(1 +  r/100) * t;
	printf("\nAmount = %d",Amount);
	cint = Amount - P;
	printf("\tCompound Interest : %d",cint);
	return 0;
}
