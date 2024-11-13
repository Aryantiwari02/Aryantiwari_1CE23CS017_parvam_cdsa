#include<stdio.h>
int main()
{
    int a,b;
    int ch;
    printf("Enter  2 value :");
    scanf("%d %d",&a,&b);
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("sum :%d",a+b);
            break;
        case 2:
            printf("sum :%d",a-b);
            break;
        case 3:
            printf("sum :%d",a*b);
            break;
        case 4:
            printf("sum :%d",a/b);
            break;
        case 5:
            printf("sum :%d",a%b);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}


