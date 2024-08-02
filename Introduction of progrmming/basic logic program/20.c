/*20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary */
#include <stdio.h>
int main() 
{
    double salary, insurancePremium, loanInstallment, remainingSalary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);

    insurancePremium = salary * 0.10;
    loanInstallment = salary * 0.10;

    remainingSalary = salary - (insurancePremium + loanInstallment);

    printf("Monthly Salary: %.2lf\n", salary);
    printf("Insurance Premium (10%%): %.2lf\n", insurancePremium);
    printf("Loan Installment (10%%): %.2lf\n", loanInstallment);
    printf("Remaining Salary: %.2lf\n", remainingSalary);

    return 0;
}


