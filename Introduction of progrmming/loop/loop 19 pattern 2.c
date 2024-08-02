/*  19. Patterns:
A
B C 
D E F
G H I J
K L M N O */
#include<stdio.h>
int main()
{
    int i, j;
    char ch = 'A'; 
    int rows = 5;
   

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%c ", ch); 
            ch++;
        }
        
        printf("\n");
    }
	
	return 0;
}
