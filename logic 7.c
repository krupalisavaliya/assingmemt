//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);

	if (marks >=90 && marks<100)
	{
		printf("/*excellent<^-^>  PASS!*/");
	}	
	else if (marks>=80 && marks<90)
	{
		printf("you can do better , PASS");
	}
	else if(marks>=70 && marks<80)
	{
		printf("good, PASS");
	}
	else if(marks>=60 && marks<70)
	{
		printf("you are promoted, PASS");
	}
	else if (marks>=50 && marks<60)
	{
		printf("you are pass");
	}
	else if(marks<50 && marks>=35)
	{
		printf("PASS");
	}
	else{
		printf("you  are fail");
	}
	return 0;
}
