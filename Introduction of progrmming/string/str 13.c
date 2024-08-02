//13. Write a program in C to remove characters from stra string except alphabets.
#include <stdio.h>
#include <ctype.h>
void removeNonAlphabets(char* str) 
{
    int i = 0, j = 0;
    while (str[i]) 
	{
        if (isalpha(str[i])) 
		{
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; 
}

int main() 
{
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
