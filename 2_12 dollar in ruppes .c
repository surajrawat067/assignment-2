#include<stdio.h>
#include<conio.h>
int main()
{
int r;
float p;
p=76.24;
printf("enter the rupees\n");
scanf("%d",&r);
printf("the value of %d rupees is %f dollar", r,r/p);
return 0;
}