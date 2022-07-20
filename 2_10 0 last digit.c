#include<stdio.h>

int main()
{
int a,b,c;
printf("enter a number\n");
scanf("%d",&a);
b=a%10;
c=a-b;
printf("%d",c);
    return 0;
}