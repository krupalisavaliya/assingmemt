//9. WAP to show difference between Structure and Union.
#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    float salary;
};

union Data
{
    int intValue;
    float floatValue;
    char charValue;
};

int main() 
{
    struct Employee emp1;
    emp1.empno = 101;
    snprintf(emp1.empname, sizeof(emp1.empname), "John Doe");
    emp1.salary = 55000.50;

    printf("Structure Example:\n");
    printf("Employee Number: %d\n", emp1.empno);
    printf("Employee Name: %s\n", emp1.empname);
    printf("Employee Salary: %.2f\n", emp1.salary);

    printf("Size of structure: %zu bytes\n", sizeof(emp1));

    union Data data;
    data.intValue = 10;
    printf("\nUnion Example:\n");
    printf("Union Integer Value: %d\n", data.intValue);

    data.floatValue = 15.75;
    printf("Union Float Value: %.2f\n", data.floatValue);

    printf("Union Integer Value after setting floatValue: %d\n", data.intValue);

    printf("Size of union: %zu bytes\n", sizeof(data));

    return 0;
}
