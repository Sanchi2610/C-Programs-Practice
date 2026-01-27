#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int r=2;
    for(int k=0;k<r;k++)
    {
     int temp=a[0];
     for(int i=0;i<n-1;i++)
     {
        a[i]=a[i+1];
     }
     a[n-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}