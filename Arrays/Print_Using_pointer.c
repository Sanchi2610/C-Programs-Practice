#include <stdio.h>
int main()
{
   int a[]={1,2,3,4,5,6,7,8};
   int n=sizeof(a)/sizeof(a[0]);
   int *p=&a[0];
   for(int i=0;i<n;i++)
   {
       printf("%d",*(p+i));
   }
    return 0;
}