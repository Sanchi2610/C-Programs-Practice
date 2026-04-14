#include <stdio.h>
int main() 
{
   int a[3]={45,1,26};
   int b[3]={4,23,5};
   int n1=sizeof(a)/sizeof(a[0]);
   int n2=sizeof(b)/sizeof(b[0]);
  for(int i=0;i<n1;i++)
  {
      for(int j=0;j<n1-1;j++)
      {
          if(a[j+1]<a[j])
          {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
   for(int i=0;i<n1+n2;i++)
   {
       for(int j=0;j<n1+n2-1;j++)
       {
           if(b[j+1]<b[j])
           {
               int temp1=b[j];
               b[j]=b[j+1];
               b[j+1]=temp1;
           }
       }
   }
  for(int i=0;i<n1+n2;i++)
  {
      printf(" %d",b[i]);
  }
   return 0;
}
