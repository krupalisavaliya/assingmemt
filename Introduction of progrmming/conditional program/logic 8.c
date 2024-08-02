/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height*/
#include <stdio.h>
int main()
{
	{
       float height;

    
       printf("Enter the height in centimeters: ");
       scanf("%f", &height );

    
      if (height < 4.0) 
	  {
          printf("Person is Short\n");
      }
	  else if (height >= 4.0 && height <= 5.0)
      {
          printf("Person is Average Height\n");
      }
	  else if (height > 5.0 && height<= 7.5)
      {
          printf("Person is Tall\n");
      } 
	  else 
	  {
          printf("Person is Very Tall\n");
      }
    }
    return 0;
}
