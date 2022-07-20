#include<stdio.h>

int main()
{
int x, c=0,r=0;
printf("enter a number\n");
scanf("%d",&x);
  c=0;
while(x!=0)
  {
   r=x&1;
    c++;
      if(r==1)
     {
       printf("%d",c);
        break;
         }

      x=x>>1;
   }
    return 0;
}