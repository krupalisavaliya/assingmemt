/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable*/

#include<stdio.h>
int main()
{
	int a ,b ,c;
	printf("\nEnter any value:");
	scanf("%d",&a);
	printf("\nEnter any value:");
	scanf("%d",&b);
	
	printf("\n");
	printf("\n\tbefore swaping:");
	printf("\nvalue number a : %d",a);
	printf("value number b : %d",b);
	c = a; 
	a = b ;
    b =c ;
	printf("\n\tAfter swapping : ");
	printf("\nvalue number a : %d",a);
	printf("value number  b : %d\n",b);
	
	// without 3rd variable
	int n1,n2;
	printf("\n\nEnter any value:");
	scanf("%d/n",&n1);
	printf("Enter any value:");
	scanf("%d",&n2);
		printf("\n");
	printf("\n\tbefore swaping:");
	printf("\nvalue number a : %d",n1);
	printf("n\tvalue number  b : %d\n",n2);
	n1 = n1 + n2;
	n2 = n1 -n2;
	n1 = n1 - n2;
	printf("\n\tAfter swapping : ");
	printf("\nvalue number a : %d",n1);
	printf("\tvalue number  b : %d",n2);
	
	
}
