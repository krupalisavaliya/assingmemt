/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include <stdio.h>

int main() 
{
    int maths, physics, chemistry;
    int totalAllThree, totalMathsPhysics;
    int eligible;

    //the user to input marks
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    // the user to input totals
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &totalAllThree);
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &totalMathsPhysics);

    // eligibility criteria
    eligible = (maths >= 65 && physics >= 55 && chemistry >= 50 &&
                totalAllThree >= 190) || (totalMathsPhysics >= 140);

    // eligibility result
    if (eligible) 
	{
        printf("The candidate is eligible.\n");
    }
	 else 
	{
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
