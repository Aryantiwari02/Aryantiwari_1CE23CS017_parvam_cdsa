#include<stdio.h>
int main()
{
    long n,sum=0,rem;
    printf("Enter a value");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits:%d",sum);
    return 0;
}