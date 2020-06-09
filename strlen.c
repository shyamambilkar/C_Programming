#include<stdio.h>
#include<string.h>
int main()
{
	unsigned int len;
	char str[30];
	
	printf("Enter any string:");
	gets(str);
	len=strlen(str);
	printf("Length of %s is :'%d'",str,len);
	return 0;
}
