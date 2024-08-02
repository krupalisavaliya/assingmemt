//28. Convert years into days and months.
#include <stdio.h>
void main()
{
	int minute,seconds,hours;
	printf("\nEnter minuts:");
	scanf("%d",&minute);
	hours = minute / 60;
	seconds = minute * 60;
	
	printf("\nMinutes you Enter:%d",minute);
	printf("\nHours it has: %d",hours);
	printf("\nSeconds it has:%d",seconds);	
}
