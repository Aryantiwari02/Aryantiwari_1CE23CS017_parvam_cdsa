#include <stdio.h>
int main() {
    float b;
    int a;
    printf("Enter a floating point number :");
    scanf("%f",&b);
    printf("float value:%f\n",b);
    a=(int)b;
    printf("float to int :%d",a);
    return 0;
}