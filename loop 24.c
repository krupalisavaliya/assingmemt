//24. 1 + 2 + 3 + 4 + 5 + ... + n.
#include<stdio.h>
int main()
{
	 int n, sum = 0,i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
	{
        sum += i; 
    }

    printf("The sum of integers from 1 to %d is: %d\n", n, sum);

	return 0;
}
