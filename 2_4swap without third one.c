#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("value of a is \n ");
scanf("%d",&a);
printf("value of b is \n ");
scanf("%d",&b);

if(a>b)
{
a=a+b;
b=a-b;
a=a-b;
}
else
{
b=a+b;
a=b-a;
b=b-a;

}
printf("value of a is %d and value of b is %d",a,b);

getch();
}
    