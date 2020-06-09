#include<stdio.h>

int main()
{
	int x,y;
	printf("Two Nmber series is :");
	scanf("%d",&x);
	
	for(int i=1;i<=10;i++)
	{
		y=x*i;
		printf("%d\n",y);
	}
	return 0;
}
