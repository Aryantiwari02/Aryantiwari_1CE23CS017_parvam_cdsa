#include<stdio.h>
int main()
{
	char x;
    int asciivalue;    
	printf("Enter a value :\n");   
	scanf("%c",&x);   
	asciivalue=(int)x;
	printf("ascii value :%d",asciivalue);
}