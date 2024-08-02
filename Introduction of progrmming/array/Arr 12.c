//12.WAP to accept 5 students name and store it in array.
#include <stdio.h>

#define NUM_STUDENTS 5
#define NAME_LENGTH 50  

int main() 
{
    char names[NUM STUDENTS][NAME_LENGTH];
    int i;
    
    printf("Enter the names of %d students:\n", NUM_STUDENTS);
    for ( i = 0; i < NUM_STUDENTS; i++) 
	{
        printf("Student %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);
        
        size_t len = 0;
        while (names[i][len] != '\0') 
		{
            if (names[i][len] == '\n') 
			{
                names[i][len] = '\0';
                break;
            }
            len++;
        }
    }
    
    printf("\nThe names of the students are:\n");
    for (i = 0; i < NUM_STUDENTS; i++) 
	{
        printf("Student %d: %s\n", i + 1, names[i]);
    }
    
    return 0;
}
