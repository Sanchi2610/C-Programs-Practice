#include <stdio.h>
int main()
{
   int a[ ]={1,2,3,5};
   int n=sizeof(a)/sizeof(a[0]);
   int xor1=0,xor2=0;
   for(int i=1;i<=n+1;i++)
   {
       xor1=xor1^i;
   }
   for(int i=0;i<n;i++)
   {
       xor2=xor2^a[i];
   }
   printf("%d",xor1^xor2);
   return 0;
}