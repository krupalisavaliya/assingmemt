//12.WAP to accept 5 students name and store it in array.
#include<stdio.h>
int main()
{
	char a[100][100],i;
	printf("Enter the 5 name:");

	for(i=1;i<=5;i++)
	{
		printf("\nenter :");
		scanf("%s",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("%s ",a[i]);
		}
		return 0;
}
