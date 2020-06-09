#include<stdio.h>

int main()
{
	int i=0;
	char x[30];
	printf("Enter any String to convert in to Lowercase:");
	gets(x);
	while(x[i]!='\0')
	{
		if(x[i]>='A'&&x[i]>='Z')
		{
			x[i]=x[i]+32;
		}
	}
	return 0;
}
