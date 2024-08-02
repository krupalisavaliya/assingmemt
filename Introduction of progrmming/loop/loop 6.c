//6. WAP to print Fibonacci series up to given numbers.
#include <stdio.h>

int main() {
    int limit;
    
    
    printf("Enter the upper limit for the Fibonacci series: ");
    scanf("%d", &limit);
    
    if (limit < 0) 
	{
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d: \n", limit);

    if (limit >= 0) 
	{
        printf("%d ", a);
    }
    if (limit >= 1) 
	{
        printf("%d ", b);
    }

    next = a + b;
    while (next <= limit) 
	{
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}

