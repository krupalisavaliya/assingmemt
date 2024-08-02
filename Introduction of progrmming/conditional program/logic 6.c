//6. Find the Character Is Vowel or Not.
#include <stdio.h>
#include <ctype.h> // Include ctype.h for the toupper() function

int is_vowel(char ch)
 {
    // Convert character to uppercase for easier comparison
    ch = toupper(ch);

    // Check if the character is a vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
        return 1; // Return true (1) if character is a vowel
    }
	 
	else 
	{
        return 0; // Return false (0) if character is not a vowel
    }
}

int main()
 {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the entered character is a vowel using the is_vowel function
    if (is_vowel(ch))
	{
        printf("%c is a vowel.\n", ch);
    }
    
	 else
	{
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
