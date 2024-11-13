#include<stdio.h>
int main()
{
    int i,n,a[i];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elemnts are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Array after reversing  the elements:");
    for(i=(n-1);i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}