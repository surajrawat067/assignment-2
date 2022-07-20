#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("value of a is \n ");
scanf("%d",&a);
printf("value of b is \n ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("value of a is %d and value of b is %d",a,b);

getch();
}
    