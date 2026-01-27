#include <stdio.h>
int minmax(int [],int);
int main()
{
   int a[]={1,2,3,4,5,6,7,8};
   int n=sizeof(a)/sizeof(a[0]);
   minmax(a,n);
   return 0;
}
int minmax(int a[],int n)
{
   int max=a[0];
   int min=a[0];
   for(int i=0;i<n;i++)
   {
       if(a[i]>max)
       max=a[i];
       if(a[i]<min)
       min=a[i];
   }
   printf("Max:%d,Min:%d",max,min);
}