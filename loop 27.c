// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6...........n.
#include<stdio.h>
int main()
{
	int terms,i;
	float ans=0.0;
	printf("enter terms : ");
	scanf("%d",&terms);
	float a,b=2.0;
	printf("\n Series = ");
	for(a=1.0; a<=terms; a++)
	{
		printf("\t %.2f",a/b); b++;
	}
	for(i=1; i<=terms; i++)
	{
		if(i%2!=0)
		{
			ans += (float)i / (i+1);
		}
		else{
			ans -= (float)i/ (i+1);
		}

	}	printf("\n ans = %.2f",ans);
}
