//13. WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter three integers:");
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    // Use nested ternary operators to find the minimum number
    int min = (a < b)
                ? ((a < c) ? a : c)
                : ((b < c) ? b : c);

    printf("The minimum number is: %d\n", min);

    return 0;
}

