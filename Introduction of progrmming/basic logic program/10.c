//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
void main()
{
	int w, l, h, a;
	printf("Enter height:");
	scanf("%d",&h);//4
	printf("\nEnter width:");
	scanf("%d",&w);//5
	printf("\nEnter legnth:");
	scanf("%d",&l);//6
	a= 2*(w*l+h*l+h*w);
	printf("\narea of a rectangular prism formula : A=2(wl+hl+hw) = %d",a);
}
