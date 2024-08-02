/*12. Write a program in C to find the number of times a given word 'is' appears in 
the given string.*/
#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *word) 
{
    int count = 0;
    int wordLength = strlen(word);
    const char *pos = str;

    while ((pos = strstr(pos, word)) != NULL) 
	{
        count++;
        pos += wordLength;  
    }

    return count;
}

int main() 
{
    char str[256];  
    const char *word = "is";  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int count = countOccurrences(str, word);

    printf("The word \"%s\" appears %d times in the string.\n", word, count);

    return 0;
}
