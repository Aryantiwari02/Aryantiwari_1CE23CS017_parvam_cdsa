#include<stdio.h>
void main()
{
	int num,n,val,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	num=(n*n);
	printf("The square value is %d",num);
	while(num>0){
		val=(num%10);
		sum=(sum+val);
		num=(num/10);
	}
	if(sum==n)
	printf("It is neon number");
	else
	printf("It is not a neon number");
	
}