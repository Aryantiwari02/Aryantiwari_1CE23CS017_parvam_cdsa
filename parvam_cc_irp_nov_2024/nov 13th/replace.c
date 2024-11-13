#include<stdio.h>
void main()
{
    char str[100];
    int  i,length;
    printf("Enter a string:");
    scanf("%s",&str);
    length=str_len(str);
    for(i=0;i<length;i++)
    {
        if(i%2==0)
        {
            str[i]='1';
        }else{
            str[i]='0';
        }
    }
    printf("String is:%s\n",str);
    printf("string length:%d",length);
}
int str_len(char* str)
{
    int len=0;
    while(*str!='\0')
    {
        len++;
        str++;
    }
    return len;
}