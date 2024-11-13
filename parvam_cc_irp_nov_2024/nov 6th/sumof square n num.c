#include<stdio.h>
int main()
{
    int  i,n,m=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m +=i;
    }
   printf("sum of %d is :%d",n,m);
   return 0;
}