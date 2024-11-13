#include <stdio.h>

int main() {
    // Write C code here
    char b;
    int a;
    printf("Enter a hexadecimal value :");
    scanf("%x",&b);
    printf("hexadecimal value:%x\n",b);
    a=(int)b;
    printf("hexa to decimal :%d",a);
    return 0;
}