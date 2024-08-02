//28. Convert years into days and months.
#include <stdio.h>
void main()
{
	int years,month,day;
	printf("Enter years:");
	scanf("%d",&years);
	
	month= years * 12;
	day= month * 30;
	
	printf("\nYears you enter :%d",years);
	printf("\nMonths it has : %d",month);
	printf("\tdays it has : %d",day);
	
}
