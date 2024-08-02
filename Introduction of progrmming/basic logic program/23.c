//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d", &a);
	printf("Enter b:");
	scanf("%d", &b);
	printf("\n");
		printf("a=%d",a);
		printf("\tb=%d",b);
		printf("\n");
		
		a = a * b;
		b = a/ b;
		a = a / b;
		
		printf("a=%d",a);
		printf("\tb=%d",b);
		return 0;
}
