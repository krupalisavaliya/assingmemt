//5. Check Number Is Positive or Negative.
#include <stdio.h>
void check_number(int num)
 {
    if (num > 0)
    {
        printf("%d is positive.\n", num);
    }
	 else if (num < 0)
    {
        printf("%d is negative.\n", num);
    } 
	else 
	{
        printf("The number is zero.\n");
    }
}

int main() 
{
    // Test cases
    check_number(5);    // Output: 5 is positive.
    check_number(-3);   // Output: -3 is negative.
    check_number(0);    // Output: The number is zero.
    
    return 0;
}
