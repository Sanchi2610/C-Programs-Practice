#include <stdio.h>
int main() 
{
   int a,b,q=0;
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   while(a>=b)
   {
       int temp=b;
       int count=1;
       while((b<<1)<=a)
       {
           temp=temp<<1;
           count=count<<1;
       }
       a=a-temp;
       q=q+count;
}
printf("Rem:%d\n",a);
printf("Quo:%d",q);
return 0;
}
