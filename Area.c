#include<stdio.h>


int main()
{
	float l,b,area;

	printf("Enter the area of length :\n");
	scanf("%f",&l);
	
	printf("Enter the area of width :\n");
	scanf("%f",&b);
	
	area=l*b;
	printf("Area of Rectangle is %f\n",area);
	return 0;
}
