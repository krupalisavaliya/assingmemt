//35. Accept the input month number and print number of days in that month.
#include <stdio.h>
int main() 
{
    int month, year;
    int days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) 
	{
        printf("Invalid month number.\n");
        return 1;
    }

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month) 
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
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;  // Leap year
            } else {
                days = 28;  // Common year
            }
            break;
        default:
            printf("Invalid month number.\n");
            return 1;
    }

    printf("Number of days in month %d of year %d: %d\n", month, year, days);

    return 0;
}

