/*37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */
#include <stdio.h>

int main() 
{
    int dayNumber;

    printf("Enter a number (1-7) to get the day of the week:\n");
    scanf("%d", &dayNumber);

    switch (dayNumber)
	{
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
