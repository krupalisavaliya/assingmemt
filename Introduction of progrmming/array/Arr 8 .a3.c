/*b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address andage */
#include <stdio.h>
struct Employee 
{
    int empNo;
    char empName[50];
    char address[100];
    int age,i,Employeeemployees;
};

int main() {
    struct Employee employees[5]; 

    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);

        printf("Employee Name: ");
        scanf(" %[^\n]s", employees[i].empName); 

        printf("Address: ");
        scanf(" %[^\n]s", employees[i].address); 

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("\n");
    }

    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Employee Number: %d\n", employees[i].empNo);
        printf("Employee Name: %s\n", employees[i].empName);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}
