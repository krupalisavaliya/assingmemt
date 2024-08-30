//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).
#include<stdio.h>
#include<math.h>
int main()
{
	int a,power1,power2,power3;
	printf("Enter your Interger: ");
	scanf("%d",&a);

	power1 = pow(a,1);	
	power2 = pow(a,2);	
	power3 = pow(a,3);
	printf("The power for the interger is: %d", power1);
	printf("\nThe power for the interger is: %d", power2);
	printf("\nThe power for the interger is: %d", power3);
	return 0;	
}
