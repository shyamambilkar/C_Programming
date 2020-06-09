#include<stdio.h>

int main()
{
	int first,second,*p,*q,sum;
	
	printf("Enter any two number:\n");
	scanf("%d %d",&first,&second);
	
	p=&first;
	q=&second;
	
	sum=*p+*q;
	
	printf("sum of enterd number is =%d\n",sum);
	return 0;
	
}
