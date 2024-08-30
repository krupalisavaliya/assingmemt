/*32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\ */
#include <stdio.h>
int main() 
{
    float basicSalary, hra, da, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);
    
    if (basicSalary <= 10000) 
	{
        hra = basicSalary * 0.20; // HRA
        da = basicSalary * 0.80;  //  DA
    }
	 else if (basicSalary <= 20000) 
	{
        hra = basicSalary * 0.25; //  HRA
        da = basicSalary * 0.90;  //  DA
    }
	 else 
	{
        hra = basicSalary * 0.30; //  HRA
        da = basicSalary * 0.95;  //  DA
    }

    grossSalary = basicSalary + hra + da;

    printf("\nSalary Details\n");
    printf("Basic Salary: Rs. %.2f\n", basicSalary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}
