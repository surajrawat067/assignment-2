#include<stdio.h>
#include<conio.h>
int main()
{
int x,a,b,c;
printf("three digit number\n");
scanf("%d",&x);
a= x%10;
b=x/10;
c=b%10;
b=b/10;
printf("%d",a+b+c);
getch();
}
