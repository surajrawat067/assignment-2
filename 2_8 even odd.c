#include<stdio.h>

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
b=a&1;
if(b==0)
printf("even");
if(b==1)
printf("odd");
    return 0;
}