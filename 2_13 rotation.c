#include<stdio.h>

int main()
{
int a,b,c,d;
printf("enter three digit number for rotation \n");
scanf("%d",&a);
b=a%10;
b=b*100;
a=a/10;
b=a+b;

printf("the roation of number is %d",b);
    return 0;
}