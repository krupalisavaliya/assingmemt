//17.WAP to show difference between Structure and Union.
#include<stdio.h>
struct hello
{
	int num1;
	float num2;
	char ch1;
};
union random
{
	int n1;
	char ch1;

};

int main()
{
	printf("------>example of structure<------");
	struct hello h1;

	int i,n,m;
	printf("\nEnter your size:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nEnter your integer value as num1:");
		scanf("\n%d",&h1.num1);
		printf("\nEnter your float value as num2:");
		scanf("\n%f",&h1.num2);
		printf("\nEnter your char value as ch1:");
		scanf("\n%c",&h1.ch1);
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe value of num1 is %d",h1.num1);
		printf("\nThe valur of num2 is %.2f",h1.num2);
		printf("\nThe value of ch1 id %c",h1.ch1);
	}
	printf("\n");
	printf("\n------>example of union<------");
	printf("\nIn union, It will give ascii value or int or char you want.");
	union random r1;

	for(i=0;i<1;i++)
	{
		printf("\nEnter your n1 value as interger :");
		scanf("\n%d",&r1.n1);
		printf("\nEnter your ch1 value as char :");
		scanf("\n%c",&r1.ch1);
	}

	for(i=0;i<1;i++)
	{
		printf("\nThe value for interger :%d",r1.n1);
		printf("\nThe value for char as :%c",r1.n1);
		printf("\nThe value for char in :%c",r1.ch1);
		printf("\nThe value for interger as :%d",r1.ch1);		
	}

	return 0;
}

