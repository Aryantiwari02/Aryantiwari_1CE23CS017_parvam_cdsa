#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter a value");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        { 
            x=1;
        }
        else
        {
            x=0;
        }
    }
    if(x==1)
    {
        printf("Given number is Prime");
    }
    else{
        printf("Given number is not a prime number");
    }
    return 0;
}
