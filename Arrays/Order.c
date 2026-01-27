#include <stdio.h>
void order(int [],int n);
int main()
{
   int a[ ]={11,6,8,78};
   int n=sizeof(a)/sizeof(a[0]);
   order(a,n);
   return 0;
}
void order(int a[],int n)
{
   for(int i=0;i<n-i;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j] > a[j+1] )
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
  for(int i=0;i<n;i++)
  {
       printf(" %d",a[i]);
  }
}