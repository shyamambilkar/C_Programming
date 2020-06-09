#include<stdio.h>

int main()
{
	int n;//For user number
	int cn;//For user current number
	long int fact=1;//for calculating the number 
	int i;
	// To enter any number for calculating the factorial
	printf("Enter a Number:\n");
	scanf("%d",&n);
	//Factorial range between number to current number
	printf("Factorial of Number between 1 to %d\n",n);
	printf("Number:Factorial:\n");
	//loop for calculating the number to current number 
	for(i=1;i<=n;i++)
	{
		cn=i;
		fact=1;
		//for calculating the factorial 
		for(int j=1;j<=cn;j++)
		{
			fact=fact*j;
		}
		// To print factorial on screen
		printf("%d:%d\n",cn,fact);
	}
	return 0;
}
