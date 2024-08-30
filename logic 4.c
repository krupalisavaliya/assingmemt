/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement */
#include<stdio.h>
 int main()
{
 	int sum,sub,mul,mod,n1,n2;
	char op;
 	float div;
 	start:
 	printf("\nEnter first number:");
 	scanf("%d",&n1);
 	printf("\nEnter second number:");
 	scanf("%d",&n2);

 	printf("\nselect '+' for addition");
 	printf("\nSelect '-' for substraction");
 	printf("\nselect '*' for multiplication");
 	printf("\nselect '/' for division");
 	printf("\nSelect '%%' for reminder/module");

 	printf("\n slect one option:");
 	scanf(" %c",&op);

 	switch(op)
 	{
 		case '+':
 			printf("\nyou select the addition:");
 			sum=n1+n2;
 			printf("%d + %d = %d",n1,n2,sum);
 			break;
 		case '-':
 			printf("\nyou select the substraction:");
 			sub=n1-n2;
 			printf("%d + %d = %d",n1,n2,sub);
 			break;
 		case '*':
 			printf("\nyou select the substraction:");
 			mul=n1*n2;
 			printf("%d * %d = %d",n1,n2,mul);
 			break;
 		case '/':
 				 if (n2 != 0) {
                printf("\nYou selected division:");
                div = (float)n1 / n2;
                printf("\n%d / %d = %.2f\n", n1, n2, div);
            } else {
                printf("\nDivision by zero is not allowed.\n");
            }
            break;
 		case '%' : 
			 		if (n2 != 0) {
                printf("\nYou selected remainder/modulo:");
                mod = n1 % n2;
                printf("\n%d %% %d = %d\n", n1, n2, mod);
            } else {
                printf("\n Division by zero is not allowed.\n");
            }
            break;
 		default:
 			printf("\nEnter the correct option");
	}
	int ans='y';
 	printf("\ndo you want to continue:");
 	scanf(" %c",&ans);
 	if(ans == 'y' || ans == 'Y')
 	{
 		goto start;
	 }
	 else{
	 	goto end;
	 }
	 end:
	 	printf("\nthank you");
	 	return 0;
}
