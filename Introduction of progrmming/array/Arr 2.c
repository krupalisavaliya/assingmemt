/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)*/
#include<stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;

    while(1) 
	{
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        
        if (choice == 5) 
		{
            printf("Exiting \n");
            break;
        }

        
        if (choice < 1 || choice > 4) 
		{
            printf("Invalid choice! Please select a valid option\n");
            continue;
        }

       
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        
        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed \n");
                }
                break;
            default:
                printf("Invalid choice! Please select a valid option \n");
                break;
        }
    }

    return 0;
}
