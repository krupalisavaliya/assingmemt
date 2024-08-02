//15. Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX_LENGTH 1000 
#define MAX_WORD_LENGTH 100 

void findLargestAndSmallestWords(const char* str, char* largest, char* smallest)
 {
    char word[MAX_WORD_LENGTH];
    int wordLength, largestLength = 0, smallestLength = INT_MAX;
    const char* p = str;
    
    largest[0] = '\0';
    smallest[0] = '\0';

    while (*p) 
	{
        while (*p == ' ') 
		{
            p++;
        }

        wordLength = 0;
        while (*p != ' ' && *p != '\0') 
		{
            word[wordLength++] = *p++;
        }
        word[wordLength] = '\0';

        if (wordLength > largestLength) 
		{
            largestLength = wordLength;
            strcpy(largest, word);
        }

        if (wordLength > 0 && wordLength < smallestLength) 
		{
            smallestLength = wordLength;
            strcpy(smallest, word);
        }
    }
}

int main() {
    char str[MAX_LENGTH];
    char largest[MAX_WORD_LENGTH];
    char smallest[MAX_WORD_LENGTH];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findLargestAndSmallestWords(str, largest, smallest);

    if (strlen(largest) > 0) 
	{
        printf("Largest word: %s\n", largest);
    }
	 else 
	{
        printf("No words found.\n");
    }

    if (strlen(smallest) > 0) 
	{
        printf("Smallest word: %s\n", smallest);
    }
	 else 
	{
        printf("No words found.\n");
    }

    return 0;
}
