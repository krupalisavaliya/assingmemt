/*a. information -print and display empno, empname, address 
andage 8*/
#include<stdio.h>
struct employee
{
	int empno;
	int age;
};
int main()
{
	struct employee ep1;
	
	ep1.empno=101;
	char empname[100] = "prit";
	ep1.age=21;
	char address[200]= ", B/H,bank of india QRTS,31,Vrundavan Apartment,panchvati cir,Ahmedabad";
	
	printf("\n employee no. is :%d",ep1.empno);
	printf("\n employee name is :%s",empname);
	printf("\n employee age is :%d",ep1.age);
	printf("\n employee address is :%s",address);	
	return 0;
	
}

