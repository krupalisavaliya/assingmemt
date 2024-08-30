//7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50],name2[50];
	printf("Enter the name1:");
	gets(name1);

	printf("Enter the name2:");
	gets(name2);

	strcpy(name1,name2);

	printf("\nEnter the string of name1 is %s",name1);
	printf("\nEnter the string of name2 is %s",name2);

	return 0;
}
