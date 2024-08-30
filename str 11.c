/*11. Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int i;
	printf("Enter string to :");
	gets(st);
	printf(" original string =%s",st);
	for(i=0; st[i]!='\0'; i++)
	{
		if(st[i] >= 'A' && st[i] <= 'Z')
		{
			st[i] = tolower(st[i]);
		}
		else if(st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] = toupper(st[i]);
		}
	}
	printf("\n New String = %s",st);
	return 0;
}
