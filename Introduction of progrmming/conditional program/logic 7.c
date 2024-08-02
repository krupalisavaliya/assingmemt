//7. Accept marks from user and check pass or fail
#include <stdio.h>

// Function to check if a student passes or fails
void check_pass_fail(int marks)
 {
    // Define passing criteria (e.g., 40 marks)
    int passing_marks = 40;

    // Check if marks are greater than or equal to passing marks
    if (marks >= passing_marks) 
	{
        printf("Congratulations! You have passed.\n");
    }
	 else
    {
        printf("Sorry! You have failed.\n");
    }
}

int main()
 {
    int marks;

    // Input marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Call check_pass_fail function to determine pass or fail
    check_pass_fail(marks);

    return 0;
}
