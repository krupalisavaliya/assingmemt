//14. Write a program in C to combine two strings manually
#include<stdio.h>
void strc(char st1[],char st2[])
{
	int i=0,j=0;
	char st[100];
	for(i=0; st1[i] != '\0'; i++)
	{
		st[j] = st1[i];
		j++;
	}
	for(i=0; st2[i] != '\0'; i++)
	{
		st[j] = st2[i];
		j++;
	}
	st[j] = '\0';
	printf("%s",st);
}

int main()
{
	char st1[100],st2[100];
	int legnth,i=0,j=0;
	printf(" Enter first string : ");
	gets(st1);
	printf("\n Enter second string :");
	gets(st2);
	strc(st1,st2);
	return 0;
}
