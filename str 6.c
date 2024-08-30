/*6. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.*/
#include <stdio.h>
#include <ctype.h>  
int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specials = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
	{
        if (isalpha(str[i])) 
		{
            
            alphabets++;
        } 
		else if (isdigit(str[i])) 
		{
            
            digits++;
        } 
		else if (!isspace(str[i]) && !ispunct(str[i])) 
		{
            specials++;
        }
        i++;
    }

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specials);

    return 0;
}
