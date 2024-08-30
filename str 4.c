//4. Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <ctype.h> 
int main() 
{
    char str[100];
    int i, count = 0;
    int word = 0;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
	{

        if (isspace(str[i]))
		{
            if (word) 
			{
                count++;
                word = 0;  
            }
        }
		 else 
		{
        
            word = 1;
        }
    }

    if (word) 
	{
        count++;
    }

    printf("Total number of words: %d\n", count);

    return 0;

}
