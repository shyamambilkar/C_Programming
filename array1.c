#include<stdio.h>

int main()
{
	int i,large;
	int arr[8]={7,13,21,16,9,31,24,5};
	large=arr[0];
	for(i=1;i<8;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("%d\n",large);
	return 0;
}
