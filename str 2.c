//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[500];
	int i;
	printf("Enter your sentence:");
	gets(a);

	printf("Enter the character of string are:");
	for(i=0;a[i]!='\0';i++)
	{
		printf(" \n%c",a[i]);
	}

	return 0;
}

