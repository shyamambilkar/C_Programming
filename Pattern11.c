#include<stdio.h>

//int main()
//{
//	int n=5;//size
//	int px=n;//left print control
//	int py=n;//right print control
//	
//	int i,j;//loop variable
//	for(i=1;i<=n;i++)
//	{
//		for (j=1;j<n*2;j++)
//		{
//			if(j>=px&&j<=py)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf("");
//			}
//		}
//		px--;
//		px++;
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int min_stars=1;
	int p_height=5;
	int p_space =p_height-1;
	int i,j,k;
	
	for(i=0;i<p_height;i++)
	{
		for(j=p_space;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<min_stars;k++)
		{
			printf("*");
		}
		min_stars+=2;
		printf("\n");
	}
	return 0;
}  
