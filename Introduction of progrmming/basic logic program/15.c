//15. Convert school’s name in abbreviated form
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char schoolName[MAX_LENGTH];
    char abbreviation[MAX_LENGTH];
    int i, j = 0;

    printf("Enter the full name of the school: ");
    fgets(schoolName, MAX_LENGTH, stdin);

    for (i = 0; schoolName[i] != '\0'; i++) 
	{
        if (i == 0 || (schoolName[i - 1] == ' ' && schoolName[i] != ' ')) 
		{
            abbreviation[j++] = toupper(schoolName[i]);
        }
    }

    abbreviation[j] = '\0';

    printf("The abbreviated form of the school’s name is: %s\n", abbreviation);

    return 0;
}
