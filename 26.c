//26. Convert temperature Fahrenheit to Celsius.
#include<stdio.h>
int main()
{
	float c,f,ans;
	printf("Enter temperature fahrenheit to convert:");
	scanf("%f",&f);
	c = (f - 32) * (5.0 / 9);
	printf("ans = %.2f",c);
}
