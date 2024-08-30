//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <stdio.h>

int main() 
{
    int n,sum = 0,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) 
	{
        sum += i*i; 
    }

     printf("The sum of squares from 1 to %d is: %d\n", n, sum);

    return 0;
}
