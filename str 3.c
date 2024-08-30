//3. Write a program in C to print individual characters of a string in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char sent[100];

	printf("Enter the sentence :");
	gets(sent);

	strrev(sent);
	for(i=0;sent[i]!='\0';i++)
	{
		printf(" \n%c", sent[i]);
	}
	return 0;
}
