#include<stdio.h>

int main()
{
	int marks;
	printf("Enter your marks:\n");
	scanf("%d",&marks);
	
	if(marks>100)
	{
		printf("marks is not Valid");
	}
	else if(marks>=80)
	{
		printf("Your grade is A");
	}
	else if(marks>=70)
	{
		printf("Your grade is B");
	}
	else if(marks>=40)
	{
		printf("Your grade is C");
	}
	else
	{
		printf("You are Failed");
	}
	return 0;
}
