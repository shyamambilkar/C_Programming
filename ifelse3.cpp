#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter First Number:\n");
	scanf("%d",&a);
	
	printf("Enter Second Number:\n");
	scanf("%d",&b);
	
	if(a>=b)
	{
		printf("%d is the Greater",a);
	}
	else
	{
		printf("%d is Greater",b);
	}
	return 0;
}
