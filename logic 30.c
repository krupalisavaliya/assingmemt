/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/
#include <stdio.h>
int main() 
{
    int customerId;
    char name[100];
    float units, totalAmount, surcharge, finalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", name);  
    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    if (units <= 350) 
	{
        totalAmount = units * 1.20;
    }
	 else if (units > 350 && units < 600) 
	{
        totalAmount = units * 1.50;
    }
	 else if (units >= 600 && units < 800) 
	{
        totalAmount = units * 1.80;
    }
	 else 
	{
        totalAmount = units * 2.00;
    }

    if (totalAmount > 800) 
	{
        surcharge = totalAmount * 0.18;
        finalAmount = totalAmount + surcharge;
    }
	 else 
	{
        finalAmount = totalAmount;
    }

    if (finalAmount < 256) 
	{
        finalAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
    if (totalAmount > 800) 
	{
        printf("Surcharge (18%%): Rs. %.2f\n", surcharge);
    }
    printf("Final Amount: Rs. %.2f\n", finalAmount);

    return 0;
}
