//10. Write a program in C to extract a substring from a given string.
#include<stdio.h>
int main()
{
	void extractSubstring(const char *source, int start, int length, char *destination) {
    int i;
    int sourceLength = 0;
    char source[100];      
    char substring[100];   
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    source[strcspn(source, "\n")] = '\0';

    printf("Enter start position: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);

    extractSubstring(source, start, length, substring);
    printf("Extracted substring: %s\n", substring);
    
    while (source[sourceLength] != '\0') 
	{
        sourceLength++;
    }

    if (start < 0 || start >= sourceLength) 
	{
        destination[0] = '\0'; 
        return;
    }

    for (i = 0; i < length && (start + i) < sourceLength; i++) 
	{
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; 
}


    return 0;
}

