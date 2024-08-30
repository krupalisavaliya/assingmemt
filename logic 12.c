//12. WAP to find maximum number among 3 numbers using ternary operator.
#include<Stdio.h>
int main()
{
  		int num1,num2,num3,max=0;
  		printf("Enter num1 = ");
  		scanf("%d", &num1);
  		printf("\nEnter num1 = ");
  		scanf("%d", &num2);
  		printf("\nEnter num1 = ");
  		scanf("%d", &num2);

  		max= (num1>num2 && num1>num3) ? num1 :
  		(num2>num3 && num2>num1) ? num2: num3;
  		printf("%d gretest",max);
  		return 0;							
}
