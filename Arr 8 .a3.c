/*b. Write a program of structure for five employee that provides the following information -print and display 
empno, empname, address andage */
#include<stdio.h>
struct address
{
	int houseno;
	char flatname[50];
	char area[50];
};
struct employee
{
	int empno;
	char empname[100];
	int age;
	struct address add;

};
int main(){

	struct employee emp;
	int i;

	for(i=0;i<5;i++)
	{	
	printf("\nEnter your id number %d:",i);
	scanf("%d",&emp.empno);
	printf("\nEnter your name %d:",i);
	scanf("%s",&emp.empname);
	printf("\nEnter your age %d:",i);
	scanf("%d",&emp.age);
	printf("\nEnter your  houseno %d:",i);
	scanf("%d",&emp.add.houseno);
	printf("\nEnter your flat name %d:",i);
	scanf("%s",&emp.add.flatname);
	printf("\nEnter your area %d:",i);
	scanf("%s",&emp.add.area);
	}

	for(i=0;i<5;i++)
	{
		printf("\nemp id no is %d",emp.empno);
		printf("\nemp name is %s",emp.empname);
		printf("\nemp age is %d",emp.age);
		printf("\nemp house no. is %d",emp.add.houseno);
		printf("\nemp flat name is %s",emp.add.flatname);
		printf("\nemp area is %s",emp.add.area);
		printf("\n");
	}
	return 0;

}
