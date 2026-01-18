#include <stdio.h>
int main()
{
   int a[4]={11,12,13,14};
   int min=a[0];
   int max=a[0];
   for(int i=0;i<4;i++)
   {
   if(a[i]<=min)
   min=a[i];
   if(a[i]>=max)
   max=a[i];
   }
   printf("min:%d\nmax=%d",min,max);
   return 0;  
}