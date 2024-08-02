// 28. 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() 
{
    int n,i;
    double term = 1.0; 
    double multiplier; 

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    printf("The sequence is:\n");
    printf("%.0f ", term);

    
    for (i = 1; i < n; i++) 
	{
        if (i % 2 == 1) 
		{
           
            multiplier = 2.0;
        } 
		else 
		{
            
            multiplier = 1.5;
        }
        term *= multiplier;
        printf("%.0f ", term);
    }
    printf("\n");

    return 0;
}
