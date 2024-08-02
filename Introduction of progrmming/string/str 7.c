//7. Write a program in C to copy one string to another string.
#include <stdio.h>
void copyString(char *destination, const char *source) 
{
    int i = 0;
    while (source[i] != '\0') 
	{
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main() 
{
    char source[100], destination[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    int len = 0;
    while (source[len] != '\0') 
	{
        if (source[len] == '\n') 
		{
            source[len] = '\0';
            break;
        }
        len++;
    }

    copyString(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
