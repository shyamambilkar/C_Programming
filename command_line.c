#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i,sum=0;
	long int fact=i;
	if(argc!=2)
	{
		printf("Enter no:");
		//exit(1);
	}
	if(atoi(argv[1]==0)||atoi(argv[1]==1))
	fact=1;
	else
	for(i=2;i<=atoi(argv[1]);i++)
	fact=fact*i;
	printf("factorial%ld",argv[1],fact);
	return 0;
}

