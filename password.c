#include<stdio.h>
#include<conio.h>
int main()
{
	char password[10],username[20],ch;
	int i;
	
	printf("Enter User Name:");
	gets(username);
	
	printf("Enter the password:");
	for(i=0;i<=8;i++)
	{
		ch=getch();
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	}
	password[i]='\0';
	printf("\n\n Your Username is :%s",username);
	printf("\n Your Password is :%s",password);
}

