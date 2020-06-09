#include<stdio.h>
int pratiksha(char []);
void main()
{
	char str[30];
	int len;
	printf("Enter a string:");
	gets(str);
	len=pratiksha(str);
	printf("Length is :%d",len);	
}
int pratiksha(char x[])
{
	int i=0, count=0;
	while(x[i]!='\0')
	count++;
	i++;
	return count;
}

