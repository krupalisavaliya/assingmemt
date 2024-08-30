/*8. Write a program in C to count the total number of vowels or consonants in a 
string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char sent[500];
	int i,vowel=0,con=0;

	printf("Enter your sentence:");
	gets(sent);

	for(i=0;sent[i]!='\0';i++)
	{
		if((sent[i]>=65 || sent[i]<=90)&&(sent[i]>=97 || sent[i]<=122))
		{
			if((sent[i] == 'a'||sent[i] == 'e'||sent[i] == 'i'||sent[i] == 'o'||sent[i] == 'u')||
			(sent[i] == 'A'||sent[i] == 'E'||sent[i] == 'I'||sent[i] == 'O'||sent[i] == 'U'))
			{
				vowel++;
			}
			else
			{
				con++;
			}
		}

	}
	printf("\nTotal numbers of vowels are %d.",vowel);
	printf("\nTotal numbers of con are %d.",con);
	return 0;
}
