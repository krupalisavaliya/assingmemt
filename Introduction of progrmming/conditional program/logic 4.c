/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement */
#include <stdio.h>
int main()
 {
    char operator;
    double num1, num2, result;

    // Input operator choice
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on operator
    switch (operator)
	
	 {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) 
			{
                printf("Error! Division by zero.\n");
            } 
			else
			 {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        case '%':
            // Modulo operation works only with integers
            if (num2 == 0)
		    {
                printf("Error! Modulo by zero.\n");
            }
			 else
		    {
                result = (int)num1 % (int)num2;
                printf("%.2lf %% %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Error! Operator is not valid.\n");
    }

    return 0;
}
