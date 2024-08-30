//12. Program of Armstrong Number in C Using For Loop & While Loop.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit=0,power=0,rem,method,i;

	printf("\nEnter any to find its armstrong number or not :");
	scanf("%d",&num);

	printf("\nchoose 1 for while loop & choose 2 for for loop:");
	scanf("\n%d",&method);
	int	copy=num,copy2=num;
	switch(method)
	{
		case 1:
				while(num!=0)
				{
				num=num/10;
				digit++;
				}
					while(copy!=0)
						{
							rem = copy%10;
							power += pow(rem,digit);
							copy=copy/10;//copy/=10
						}
					if(power==copy2)
						{
							printf("\n%d is an armstrong",copy2);
						}
					else{
						printf("\n%d is not an armstrong",copy2);
						}
			break;

		case 2 :
				for(i=num; num!=0; i++)
				{
					num=num/10;
					digit++;
				}
				for(i=copy; copy!=0; i++)
				{
						while(copy!=0)
						{
							rem = copy%10;
							power += pow(rem,digit);
							copy=copy/10;//copy/=10
						}
					if(power==copy2)
						{
							printf("\n%d is an armstrong",copy2);
						}
					else{
						printf("\n%d is not an armstrong",copy2);
						}	
				}
			break;
	}
		return 0;

}
