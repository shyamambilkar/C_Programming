#include<stdio.h>

int main()
{
	int i,n,shyam =1;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		shyam=shyam*i;
		printf("\n Factorial of Number %d is %d",n,shyam);
	}
	//printf("Factorial of Number %d is %d:",n,fact);
	return 0;
}
