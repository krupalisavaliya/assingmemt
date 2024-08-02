//9. C Program to Check Uppercase or Lowercase or Digit or Special Character.
#include <stdio.h>
#include <ctype.h>  // For isupper(), islower(), isdigit()

int main() 
{
    char ch;
    int upper,lower,digit;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if (upper) 
	{
        printf("The character '%c' is an uppercase letter.\n",upper);
    }
	 else if (lower) 
	{
        printf("The character '%c' is a lowercase letter.\n",lower);
    } 
	else if (digit) 
	{
        printf("The character '%c' is a digit.\n");
    }
	 else 
	{
        printf("The character '%c' is a special character.\n");
    }

    return 0;
}
