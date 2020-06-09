#include<stdio.h>

int main()
{
	int x,y,temp;
	printf("Enter the value of x and y");
	scanf("%d %d",&x,&y);
	
	printf("Before swapping the value:\n",x,y);
	x=y;
	y=temp;
	temp=x;
	
	printf("After swapping the value:\n",x,y);
	return 0;
}
