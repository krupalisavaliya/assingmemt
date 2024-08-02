/*31. Write a program in C to read any Month Number in integer and display the 
number of days for this month.*/
#include <stdio.h>
int main() 
{
    int monthNumber;
    int days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    switch (monthNumber) 
	{
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            days = 28; // Assuming a non-leap year
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1; 
    }
    printf("Number of days in month %d: %d\n", monthNumber, days);

    return 0;
}
