#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,len,j=-1;
	int flag=1;
	printf("Enter the string");
	scanf("%s",str);
	j=strlen(str);
	do{
		i++;
		j--;
		if(str[i]!=str[j])
			flag=0;
	}
	while(i!=j || i!=str[j]);
	if(flag==1)
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}