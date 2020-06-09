#include<stdio.h>

int main(){
	
	int n,t,a,b=0;
	
	printf("Enter any Number :\n");
	scanf("%d",&n);
	t=n;
	while(n>0){
		
		a=n%10;
		b=b+a*a*a;
		n=n/10;
	}
	if(b==t){
		printf("Number is Armstrong Number");
	}
	else{
		printf("Number is Not Armstrong Number");
	}
	return 0;
}
