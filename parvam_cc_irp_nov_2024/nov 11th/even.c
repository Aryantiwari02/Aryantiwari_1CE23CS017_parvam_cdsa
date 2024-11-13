#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Value:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Input Value is Even");
    }
    else{
        printf("Input Value is Odd");
    }
    return 0;
}