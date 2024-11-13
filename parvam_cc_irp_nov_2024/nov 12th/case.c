#include<stdio.h>
int main()
{
    char ch;
    int av;
    printf("Enter a character:");
    scanf("%c",&ch);
    av=(int)ch;
    if(av>=65&&av<=90)
    {
        printf("It is an uppercase character");
    }
    else{
         printf("It is a lowercase character");
    }
    return 0;
}