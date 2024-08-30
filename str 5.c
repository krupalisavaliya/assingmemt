/*5. Write a program in C to compare two strings without using string library 
functions*/
#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[500],ch2[500];
	int i,result=0;

	printf("Enter the value for ch1:");
	gets(ch1);
	printf("Enter the value for ch2:");
	gets(ch2);

	for(i=0;ch1[i]!='\0' ;i++)
	{

		if(ch1[i] != ch2[i])
		{
			result = 1; 	
		}

	}
	if(result == 1 )
	{
		printf("It is not a string");
	}
	else
	{
		printf("it is a string");
	}

}
