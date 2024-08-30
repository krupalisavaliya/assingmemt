/*1. Write a program in C to find the length of a string without using library 
functions */
#include<stdio.h>
#include<string.h>
int main()
{
	char sentence[100];
	int length=0,i;
	printf("Enter your sentence : ");
	gets(sentence);

	for(i=0;sentence[i]!='\0';i++)
	{
		length++;
	}
	printf("The length of a string %d",length);
	return 0;
}
