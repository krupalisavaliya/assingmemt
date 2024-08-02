//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).
#include <stdio.h>
#include <math.h>
void main()
{
	int n1,n2,n3,num;
	printf("\nEnter num:");
	scanf("%d",&num);
	n1=pow(num,1);
	n2=pow(num,2);
	n3=pow(num,3);
	printf("first power : %d,  second power : %d,  Third power: %d",n1,n2,n3);
	
}
