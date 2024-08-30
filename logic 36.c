/*36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include<stdio.h>
int main()
{
	int unit,charge;
	float total;
	float surcharge=0;
	
	printf("Enter your electricity bill :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		charge = 0.50*50;
		
	}
	else if(unit>50 && unit<=150)
	{
		charge = (0.50*50) + (unit-50) * 0.75 ;
		
	}
	else if (unit>150 && unit<=250)
	{
		charge = (0.50*50) + (0.75*100)+ (unit-150) * 1.20;
	}
	else 
	{
		charge = (0.50*50) + (0.75*100)+ (1.20*100) +(unit-250) * 1.50;
	}
	
	total = charge;
	printf("The total electricity bill is %.2f",total);
	
	surcharge = total * 0.2;
	printf("\nThe addition surcharge of 0.2 is %.2f",surcharge);	
	
	return 0;
}

