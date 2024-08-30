/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<Stdio.h>
int main()
{
	int math,phy,chem,tmpc=0,tmp=0;

	printf("Enter marks of maths : ");
	scanf("%d",&math);
	printf("\nEnter marks of physics : ");
	scanf("%d",&phy);
	printf("\nEnter marks of chemistry : ");
	scanf("%d",&chem);

	tmpc = math + phy + chem; //it has to be 188
	tmp = math + phy;//137
	printf("\n Total in Maths and Physics = %d ",tmp);
	printf("\n  Total in all three subject  = %d ",tmpc);

	if(math >= 65 && phy>=55 && chem >= 50 && tmp >= 140 && tmpc >= 188)
	{
		printf("\n You are eligible");
	}

	else {
		 printf("\n You are not eligible");
	}
	return 0;
}
