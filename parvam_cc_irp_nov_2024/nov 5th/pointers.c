#include<stdio.h>
void main()
{
	int x,y,*pointer,*pointer1;
	x=22;
	pointer=&x;
	y=*pointer;
	pointer=&y;
	printf("value of x %d",x);
	printf("value of y %d",y);
	printf("address of x %p",pointer);
	printf("address of y %p",pointer1);
}
