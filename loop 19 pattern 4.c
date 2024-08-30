/* 19 pattern.
*
* *
* * *
* * * *
* * * * * 
* * * * * *
* * * * *
* * * *
* * *
* *
*       */
#include<stdio.h>
int main()
{
	 
    int i, j;
    int maxStars = 6; 

    for (i = 1; i <= maxStars; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    for (i = maxStars - 1; i >= 1; i--) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
}
	

