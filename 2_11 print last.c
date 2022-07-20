#include<stdio.h>

int main()
{
int a,b,c,d;
printf("enter a number\n");
scanf("%d",&a);
printf("enter a digit\n");
scanf("%d",&b);
c=a/0.1;
d=c+b;
printf("%d",d);
    return 0;
}