//27. Convert days into months.
#include <stdio.h>
void main()
{
	int days,month,remaining;
	printf("\nEnter the Days:");
	scanf("%d",&days);
	month = days/ 30;
	printf("\nThe whole months = %d",month);
	remaining = days % 30;
	printf("\tRemainng days = %d",remaining);
	printf("\nDays you enter : %d \nAccording total month : %d \nthe remaining days :%d",days,month,remaining);
}
