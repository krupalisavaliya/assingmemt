/*12. Write a program in C to find the number of times a given word 'is' appears in 
the given string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[500];
	int i,count=0;

	printf("Enter your string:");
	gets(a);

	for (i=0;a[i]!='\0';i++)
	{
		if((a[i] == 's' && a[i-1] == 'i' && a[i-2] == ' ' && a[i+1] == ' ')||
		(a[i] == 'S' && a[i-1] =='I') || (a[i]==' ' && a[i-1]==' '))
		count++;
	}
	printf("The number of times 'is' appears %d.",count);
	return 0;

}

