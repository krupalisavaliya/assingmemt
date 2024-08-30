//19.Calculate compound interest.
#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, amount;
    int timesCompounded, years;

    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of times that interest is compounded per year (n): ");
    scanf("%d", &timesCompounded);

    printf("Enter the number of years the money is invested (t): ");
    scanf("%d", &years);
    
    rate = rate / 100.0;

    amount = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    printf("The amount after %d years is: %.2lf\n", years, amount);

    return 0;
}
