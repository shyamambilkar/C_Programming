#include<stdio.h>
#include<math.h>

int main()
{
	int size=4;
	int i,j,k;
	int p=1;
	
	for(i=size;i>=-size;i--)
	{
		for(j=1;j<=abs(i);j++)
		{
			printf(" ");
		}
		//
		p=(i>0)?1:j;
		for(k=size;k>=abs(i);k--)
		{
			printf("%d",p);
			p++;
		}
		printf("\n");
	}
	return 0;
}
