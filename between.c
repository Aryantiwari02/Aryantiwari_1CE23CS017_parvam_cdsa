#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter value for n1:");
    scanf("%d",&n1);
    printf("Enter value for n2:");
    scanf("%d",&n2);
    if(n1<n2)
    {
        for(;n1++< n2-1;)
        {
            printf("%d\t",n1);
        }
    }
    else{
        printf("n2 must be greater than n1");
    }
    return 0;
}