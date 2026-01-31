#include <stdio.h>
int main() 
{
   int a,b,c=0;
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   while(b!=0)
   {
       c=a&b;
       a=a^b;
       b=c<<1;
   }
   printf("Sum:%d",a);
}