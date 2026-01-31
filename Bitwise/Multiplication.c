#include <stdio.h>
int main() 
{
   int a,b,result=0;
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   while(b>0)
   {
       if(b&1)
       {
           result=result+a;
       }
       a=a<<1;
       b=b>>1;
   }
   printf("%d",result);
   return 0;
}