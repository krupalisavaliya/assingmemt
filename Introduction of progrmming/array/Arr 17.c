//17.WAP to show difference between Structure and Union.
#include <stdio.h>
struct Student 
{
    int id;
    char name[50];
    float gpa;
};

union Data 
{
    int intValue;
    float floatValue;
    char charValue;
};

int main() 
{
    // Initialize structure and union
    struct Student student1;
    union Data data1;

    // Assign values to the structure
    student1.id = 1;
    snprintf(student1.name, sizeof(student1.name), "John Doe");
    student1.gpa = 3.5;

    // Assign values to the union
    data1.intValue = 10;
    printf("Union intValue: %d\n", data1.intValue);
    
    data1.floatValue = 15.5;
    printf("Union floatValue: %.2f\n", data1.floatValue);
    
    data1.charValue = 'A';
    printf("Union charValue: %c\n", data1.charValue);

    printf("\nStructure Student Details:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("GPA: %.2f\n", student1.gpa);

    printf("\nSize of struct Student: %zu bytes\n", sizeof(student1));
    printf("Size of union Data: %zu bytes\n", sizeof(data1));

    return 0;
}
