//13. WAP to find minimum number among 3 numbers using ternary operator
#include<Stdio.h>
int main()
{
	int min=35625,num1,num2,num3;
		printf("Enter num1 = ");
  		scanf("%d", &num1);
  		printf("\nEnter num1 = ");
  		scanf("%d", &num2);
  		printf("\nEnter num1 = ");
  		scanf("%d", &num2);

  		min= (n1<n2 && n1<n3) ? n1:
  									(n2<n1 && n2<n3) ? n2 :n3;
  		printf("%d is smallest ", min);

	return 0;
}

