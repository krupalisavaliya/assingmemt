/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include <stdio.h>
int main()
 {
    int number[10]; // Array to store 10 numbers
    int i;
    int even_count = 0, odd_count = 0;
    int sum_even = 0, sum_odd = 0;
    printf("Enter 10 number:\n");

    
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < 10; i++) 
	{
        if (number[i] % 2 == 0)
		 {
            even_count++;
            sum_even += number[i];
        }
		 else 
		{
            odd_count++;
            sum_odd += number[i];
        }
    }

    
    printf("Number of even number: %d\n", even_count);
    printf("Number of odd number: %d\n", odd_count);
    printf("Sum of even number: %d\n", sum_even);
    printf("Sum of odd number: %d\n", sum_odd);

    return 0;
}
