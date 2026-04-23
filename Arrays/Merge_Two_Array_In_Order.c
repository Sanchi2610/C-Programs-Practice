#include <stdio.h>
int main() 
{
   int a[]={1,4,2,10,11,78};
   int n1=sizeof(a)/sizeof(a[0]);
   int b[]={6,8,7,9,12,99};
   int n2=sizeof(b)/sizeof(b[0]);
   int c[n1+n2];
   for(int i=0;i<n1;i++)
   {
       c[i]=a[i];
   }
   for(int i=0;i<n2;i++)
   {
       c[n1+i]=b[i];
   }
   for(int i=0;i<n1+n2;i++)
   {
       for(int j=0;j<n1+n2;j++)
       {
           if(c[j+1]>c[j])
           {
               int temp=c[j];
               c[j]=c[j+1];
               c[j+1]=temp;
           }
       }
   }
   for(int i=0;i<n1+n2;i++)
   {
       printf(" %d",c[i]);
   }
    return 0;
}
