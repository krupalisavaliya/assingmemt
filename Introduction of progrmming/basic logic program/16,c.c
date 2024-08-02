//16. Convert country’s name in abbreviate form.
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

int main() 
{
    char countryName[MAX_LENGTH];
    char abbreviation[MAX_LENGTH];
    int i, j = 0;

    printf("Enter the full name of the country: ");
    fgets(countryName, MAX_LENGTH, stdin);

    for (i = 0; countryName[i] != '\0'; i++) 
	{
        
        if (i == 0 || (countryName[i - 1] == ' ' && countryName[i] != ' ')) 
		{
            abbreviation[j++] = toupper(countryName[i]);
        }
    }

    abbreviation[j] = '\0';

    printf("The abbreviated form of the country's name is: %s\n", abbreviation);

    return 0;
}

