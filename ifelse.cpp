#include<stdio.h>

void main()
{
	int number;
	printf("Enter any Number :\n");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("%d is Even Number",number);
	}
	else
	{
		printf("%d is odd Number",number);
	}
	return 0;
}
